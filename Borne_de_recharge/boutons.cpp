																							/************************************************/
																							//												//
																							//				"boutons.cpp"					//
																							//												//
																							//				Auteurs :						//
																							//				- BETTAHI EL MEHDI				//
																							//				- ABOUYAAQOUB BADR				//
																							//												//
																							/************************************************/

#include "boutons.h"

using namespace std;

entrees* bouton;

void Boutons :: boutons_initialiser(){
    bouton = acces_memoire(&shmid);
    if(bouton == 0) cout << "err de mem shmid" << endl;
}

int Boutons :: boutons_charge(){
    if (bouton->bouton_charge==1) return 1;
    else return 0;
}

void Boutons :: boutons_reset_charge(){
    bouton->bouton_charge=0;
}

int Boutons :: boutons_stop(){
    if (bouton->bouton_stop==1) return 1;
    else return 0;
}

void Boutons :: boutons_reset_stop(){
    bouton->bouton_stop=0;
}
