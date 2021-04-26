                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "generateursave.cpp"            //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "generateursave.h"

using namespace std;

entrees* gene;

Boutons oboutons_gs;
Voyants ovoyants_gs;
Prise oprise_gs;
BaseClients obaseclients_gs;

typedef enum _etat{etat1,etat2,etat3,etat4,etat5,etat6,etat7} etat;
void generateursave_MEF(etat etat_initial);

void GeneSave :: generateursave_initialiser(){
    gene=acces_memoire(&shmid);
    if (gene==0) cout << "Erreur pas de mem sh\n" << endl;
}

void GeneSave :: generateursave_charger(){
    generateursave_MEF(etat1);
}

void GeneSave :: generateursave_deconnecter(){
    generateursave_MEF(etat6);
}

void generateursave_MEF(etat etat_initial){
    unsigned int numCarte2;
    etat etatPresent=etat_initial, etatSuivant=etat_initial;

    while(1){
       switch (etatPresent){
          case etat1:
            if(gene->gene_u==9) etatSuivant=etat2;
          break;

          case etat2:
            if(gene->gene_u==6) etatSuivant=etat3;
            if(gene->gene_u==12) etatSuivant=etat1;
            if(oboutons_gs.boutons_stop()==1) etatSuivant=etat5; //1
            //if(oboutons_gs.boutons_stop()==1 && obaseclients_gs.reprise_carte(numCarte2)==1) etatSuivant=etat5; //1
          break;

          case etat3:
            if(gene->gene_u==6) etatSuivant=etat4;
            if(gene->gene_u==9) etatSuivant=etat2; //5
            if(oboutons_gs.boutons_stop()==1) etatSuivant=etat5; //5
            //if(oboutons_gs.boutons_stop()==1 && obaseclients_gs.reprise_carte(numCarte2)==1) etatSuivant=etat5; //5
          break;

          case etat4:
            if(gene->gene_u==9) etatSuivant=etat5;
            if(oboutons_gs.boutons_stop()==1) etatSuivant=etat5;
            //if(oboutons_gs.boutons_stop()==1 && obaseclients_gs.reprise_carte(numCarte2)==1) etatSuivant=etat5;
          break;

          case etat5:
            // attente reprendre vehicule
            if (carte_inseree() && (gene->gene_u==9 || oboutons_gs.boutons_stop()==1 )){
                numCarte2=lecture_numero_carte();
                if(obaseclients_gs.reprise_carte(numCarte2)==1) etatSuivant=etat6;
                else{
                    ovoyants_gs.clignoter_defaut();
                    attente_retrait_carte();
                }
            }
          break;

          case etat6:
            if(gene->gene_u==12) etatSuivant=etat5;
            else etatSuivant=etat7;
          break;

          case etat7:
            //deconnexion
          break;
       } // fin switch

    etatPresent=etatSuivant;
    if(etatPresent==etat1){
        ovoyants_gs.set_charge(ROUGE);
        oprise_gs.prise_deverouiller_trape();
        gene->gene_pwm=DC;
    }
    if(etatPresent==etat2){
        oprise_gs.prise_set_prise(VERT);
        oprise_gs.prise_verouiller_trape();
        gene->gene_pwm=AC_1K;
    }
    if(etatPresent==etat3){
        gene->contacteur_AC = 1;   // fermer AC
        gene->gene_pwm=AC_CL;
    }
    if(etatPresent==etat4){
        //charge
    }
    if(etatPresent==etat5){
        gene->contacteur_AC = 0;   // ouvrir AC
        ovoyants_gs.set_charge(VERT);
        gene->gene_pwm=DC;
    }
    if(etatPresent==etat6){
        ovoyants_gs.set_charge(OFF);
        oprise_gs.prise_deverouiller_trape();
        oprise_gs.prise_set_prise(OFF);
    }
    if(etatPresent==etat7){
        ovoyants_gs.set_charge(OFF);
        gene->gene_pwm=STOP;
        oprise_gs.prise_deverouiller_trape();
        oprise_gs.prise_set_prise(OFF);
        attente_retrait_carte();
        oprise_gs.prise_verouiller_trape();
        ovoyants_gs.set_dispo(VERT);
        break;
     }
    }//fin while(1)
}
