                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "prise.h"    			        //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#ifndef PRISE_H
#define PRISE_H

#include <iostream>

#include "donnees_borne.h"
#include "memoire_borne.h"

class Prise
{
  public : 
	void prise_initialiser();
	void prise_set_prise(led couleur);
	void prise_verouiller_trape();
	void prise_deverouiller_trape();
};

/*!
* Fonction: prise_initialiser 
* -------------------------------
* acceder a la memoire de la prise
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: prise_set_prise 
* -------------------------------
* affecte une couleur au voyant de la prise
*
* Arguments:
* -------------------------------
* couleur <led> : la couleur choisie 
* 	pour allumer la les (R/V/OFF)
*
* return:
* -------------------------------
* 
*/

/*!
* Fonction: prise_verouiller_trape 
* -------------------------------
* verrouiller la trappe de prise
* (eteindre la led "trappe")
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: prise_deverouiller_trape 
* -------------------------------
* deverrouiller la trappe de prise
* (allume la led "trappe" en VERT)
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 
*/



#endif //PRISE_H