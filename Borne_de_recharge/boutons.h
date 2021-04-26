																							/************************************************/
																							//												//
																							//				"boutons.h"						//
																							//												//
																							//				Auteurs :						//
																							//				- BETTAHI EL MEHDI				//
																							//				- ABOUYAAQOUB BADR				//
																							//												//
																							/************************************************/

#ifndef BOUTONS_H
#define BOUTONS_H

#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

class Boutons
{
public :
	void boutons_initialiser();

	int boutons_charge();
	void boutons_reset_charge();
	
	int boutons_stop();
	void boutons_reset_stop();
};

/*!
* Fonction: boutons_initialiser 
* -------------------------------
* acceder a la memoire des boutons
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: boutons_charge 
* -------------------------------
* verifie si le bouton charge est appuye
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 1 si le bouton charge est appuye
* 0 sinon
*/


/*!
* Fonction: boutons_reset_charge 
* -------------------------------
* impose la valeur 0 au bouton charge
*	
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/

/*!
* Fonction: boutons_charge 
* -------------------------------
* verifie si le bouton stop est appuye
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 1 si le bouton stop est appuye
* 0 sinon
*/


/*!
* Fonction: boutons_reset_stop 
* -------------------------------
* impose la valeur 0 au bouton stop
*	
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/

#endif