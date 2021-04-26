                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "voyants.cpp"                   //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "voyants.h"

using namespace std;

entrees* voyant;
Timer otimer_voyant;

int shmid;

void Voyants :: voyants_initialiser(){
    voyant = acces_memoire(&shmid);
    if(voyant == 0) cout << "err pas de mem shmid" << endl;
    else voyant->led_dispo=VERT;
}

void Voyants :: set_charge(led couleur){
    voyant->led_charge = couleur ;
}

void Voyants :: set_dispo(led couleur){
    voyant->led_dispo = couleur ;
}

void Voyants :: set_defaut(led couleur){
    voyant->led_defaut = couleur ;
}

void Voyants :: clignoter_charge(){
    set_defaut(OFF);
    while(otimer_voyant.timer_valeur()<=8){
      if(otimer_voyant.timer_valeur()%2 ==1)set_charge(VERT);
      if(otimer_voyant.timer_valeur()%2 ==0)set_charge(OFF);
    }
}

void Voyants :: clignoter_defaut(){
    set_charge(OFF);
    while(otimer_voyant.timer_valeur()<=8){
      if(otimer_voyant.timer_valeur()%2 ==1)set_defaut(ROUGE);
      if(otimer_voyant.timer_valeur()%2 ==0)set_defaut(OFF);
    }
}

unsigned short int Voyants :: voyants_etat_dispo(){
    if (voyant->led_dispo==VERT) return 1;
    else  return 0;
}
