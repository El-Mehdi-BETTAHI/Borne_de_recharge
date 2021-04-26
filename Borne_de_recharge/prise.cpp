                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "prise.cpp"    			        //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "prise.h"

using namespace std;

entrees* prise;

void Prise :: prise_initialiser(){
    prise=acces_memoire(&shmid);
    if (prise==0) printf("Erreur pas de mem sh\n");
    else prise->led_prise=OFF;
}

void Prise :: prise_set_prise(led couleur){
    prise->led_prise=couleur;
}

void Prise :: prise_verouiller_trape(){
    prise->led_trappe=OFF;
}

void Prise :: prise_deverouiller_trape(){
    prise->led_trappe=VERT;
}
