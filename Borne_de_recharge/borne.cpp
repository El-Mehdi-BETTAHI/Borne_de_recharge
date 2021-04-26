																							/************************************************/
																							//												//
																							//				"borne.cpp"						//
																							//												//
																							//				Auteurs :						//
																							//				- BETTAHI EL MEHDI				//
																							//				- ABOUYAAQOUB BADR				//
																							//												//
																							/************************************************/


#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"
#include "generateursave.h"

int main()
{

    LecteurCarte lecteurcarte;
    GeneSave genesave;

    lecteurcarte.lecteurcarte_initialiser();
    genesave.generateursave_initialiser();

    while (1)
    {
        lecteurcarte.lecteurcarte_lire_carte();
    }

}
