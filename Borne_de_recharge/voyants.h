																							/************************************************/
																							//												//
																							//				"voyants.h"						//
																							//												//
																							//				Auteurs :						//
																							//				- BETTAHI EL MEHDI				//
																							//				- ABOUYAAQOUB BADR				//
																							//												//
																							/************************************************/

#ifndef VOYANTS_H
#define VOYANTS_H

#include <iostream>

#include "donnees_borne.h"
#include "memoire_borne.h"
#include "timer.h"

class Voyants
{
  public : 
	void voyants_initialiser();
	void set_charge(led couleur);
	void set_defaut(led couleur);
	void set_dispo(led couleur);
	void clignoter_charge();
	void clignoter_defaut();
	unsigned short int voyants_etat_dispo();
};

/*!
* Fonction: voyants_initialiser 
* -------------------------------
* acceder a la memoire des voyants
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: set_charge 
* -------------------------------
* controle la led "Charge" de la borne
*
* Arguments:
* -------------------------------
* couleur <led> : OFF = led eteinte, VERT = led allumee en vert, ROUGE = led allumee en rouge 
*
* return:
* -------------------------------
* 
*/

/*!
* Fonction: set_defaut 
* -------------------------------
* controle la led "Defaut" de la borne
*
* Arguments:
* -------------------------------
* couleur <led> : OFF = led eteinte, VERT = led allumee en vert, ROUGE = led allumee en rouge
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: set_dispo 
* -------------------------------
* controle la led "Dispo" de la borne
*
* Arguments:
* -------------------------------
* couleur <led> : OFF = led eteinte, VERT = led allumee en vert, ROUGE = led allumee en rouge
*
* return:
* -------------------------------
* 
*/

/*!
* Fonction: clignoter_charge 
* -------------------------------
* fait clignoter la led "Charge" de la borne, periode: 1s
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: clignoter_defaut 
* -------------------------------
* fait clignoter la led "Defaut" de la borne, periode: 1s
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 

/*!
* Fonction: voyants_etat_dispo 
* -------------------------------
* verifie si la led "Dispo" est allumee en vert
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 1 si la led "Dispo" est allumee en vert
* 0 sinon
*
*/





#endif // LECTEURCARTE_H