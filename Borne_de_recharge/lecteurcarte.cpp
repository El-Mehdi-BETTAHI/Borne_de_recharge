                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "lecteurcarte.cpp"              //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "lecteurcarte.h"

using namespace std;

Voyants ovoyants;
Timer otimer;
Boutons oboutons;
Prise oprise;
BaseClients obaseclients;
GeneSave ogenesave;

void LecteurCarte :: lecteurcarte_initialiser()
{
   initialisations_ports();
   ovoyants.voyants_initialiser();
   otimer.timer_initialiser();
   oboutons.boutons_initialiser();
   oprise.prise_initialiser();
   oprise.prise_verouiller_trape();
}

void LecteurCarte::lecteurcarte_lire_carte()
{
    char choixAU;
    while(carte_inseree()){
        int boutonCharge_appuye=0, i=0, j=0;
        char choix;
        unsigned int numCarte;
        numCarte = lecture_numero_carte();
        cout << "\nadmin (a) ou user (u) ? : " << endl;
        cin >> choixAU;
        switch(choixAU){
          case 'a' :
            cout << "\nCarte numéro = " << numCarte << endl;
            cout << "taper 'a' pour rajouter ce client\n votre choix :  " << endl;
            cin >> choix;
            if(choix == 'a'){
                if(obaseclients.verifier(numCarte)==0) {
                    fstream AListeClients;
                    AListeClients.open("/home/etudiant/Bureau/BorneRecharche/projet_uml_c++/base.txt" , ios::in | ios::out | ios::app);
                    if (!AListeClients){
                        cerr << "err ! file not opened" << endl;
                        break;
                    }
                    else{
                       AListeClients << numCarte << endl;
                       AListeClients.seekg(0);
                    }
                    AListeClients.close();
                    cout << "Client ajouté avec succes" << endl;
                    break;
                }
                else cout << "\nClient déjà ajouté !!!\n" << endl;
                break;
            }
            else {
                cout << "Choix non valide" << endl;
                break;
            }


        case 'u' :
        ////////////////////////////////////////////////////////////////////////////////////////
               if(obaseclients.authentifier(numCarte)==1){
                   cout << "\tAuthentification reussie" << endl;
                   if (i==0) otimer.timer_raz();
                   i++;
                   j=0;
                   ovoyants.clignoter_charge();
                   // attente 1 minute
                   while (otimer.timer_valeur()<=60 && boutonCharge_appuye==0){
                       if(oboutons.boutons_charge()) {
                           boutonCharge_appuye=1;
                           break;
                       }
                   } // fin while
                   if(boutonCharge_appuye==1){
                       oboutons.boutons_reset_charge();
                       ovoyants.set_dispo(OFF);
                       oprise.prise_deverouiller_trape();
                       oprise.prise_set_prise(VERT);
                       attente_retrait_carte();
                       ogenesave.generateursave_charger();
                       attente_insertion_carte();
                   }
                   else {
                       cout << "\tdelais dépassé" << endl;
                       attente_retrait_carte();
                   }
               }
               else {
                   cout << "\tEchec d'Authentification" << endl;
                   if (j==0) otimer.timer_raz();
                   j++;
                   i=0;
                   ovoyants.clignoter_defaut();
                   attente_retrait_carte();
               }
            break;
        }
    } // fin while(carte_inseree())
        attente_retrait_carte();
        ovoyants.set_dispo(VERT);

}



