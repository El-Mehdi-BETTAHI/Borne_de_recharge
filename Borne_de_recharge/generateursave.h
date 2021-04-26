                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "generateursave.h"	            //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#ifndef GENERATEUR_SAVE_H
#define GENERATEUR_SAVE_H

#include <iostream>
#include <lcarte.h>

#include "donnees_borne.h"
#include "memoire_borne.h"
#include "prise.h"
#include "voyants.h"
#include "boutons.h"
#include "lecteurcarte.h"
#include "base_clients.h"

class GeneSave
{
  public : 
	void generateursave_initialiser();
	void generateursave_charger();
	void generateursave_deconnecter();
};

/*!
* Fonction: generateursave_initialiser 
* -------------------------------
* acceder a la memoire du generateur save
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: generateursave_charger 
* -------------------------------
* selectionner l'etat du debut de charge
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 
*/


/*!
* Fonction: generateursave_deconnecter 
* -------------------------------
* selectionner l'etat de la fin de charge
* deconnexion
*	
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/






#endif // GENERATEUR_SAVE_H


