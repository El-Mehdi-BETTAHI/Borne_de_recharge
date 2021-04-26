                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "lecteurcarte.h"	            //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H

#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "base_clients.h"
#include "voyants.h"
#include "timer.h"
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "boutons.h"
#include "prise.h"
#include "generateursave.h"

#include <lcarte.h>

class LecteurCarte
{
  public : 
	void lecteurcarte_initialiser();
	void lecteurcarte_lire_carte();
};

/*!
* Fonction: lecteurcarte_initialiser 
* -------------------------------
* initialise les ports et l'ensemble
* des composants du systeme
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: lecteurcarte_lire_carte 
* -------------------------------
* Si la borne est disponible, et si un client 
* 	insère sa carte, la fonction demande de choisir 
* 	soit l’interface de client au bien l’interface 
* 	d’administrateur. Après elle lit le numéro de 
* 	la carte et l’authentifier afin de charge 
* 	du véhicule, ou la reprendre.
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 
*/

#endif // LECTEURCARTE_H
