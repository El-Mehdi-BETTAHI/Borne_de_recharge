																							/************************************************/
																							//												//
																							//				"base_client.h"					//
																							//												//
																							//				Auteurs :						//
																							//				- BETTAHI EL MEHDI				//
																							//				- ABOUYAAQOUB BADR				//
																							//												//
																							/************************************************/

#ifndef BASE_CLIENTS_H
#define BASE_CLIENTS_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "donnees_borne.h"
#include "memoire_borne.h"

class BaseClients
{
  public : 
	int authentifier(unsigned int numCarte);
	int reprise_carte(unsigned int numCarte);
	int verifier(unsigned int numCarte);
};

/*!
* Fonction: authentifier 
* -------------------------------
* compare le numero de la carte inseree
* 	avec un ensemble de numeros autorisees
* 	deja stocke dans un fichier ".txt"
*
* Arguments:
* -------------------------------
* numCarte <unsigned int> : numero de la carte lue
*
* return:
* -------------------------------
* 1 dans le cas le numero de la carte coincide 
* 	avec un des numeros dans le fichier ".txt"
* 0 dans le cas contraire
*/


/*!
* Fonction: reprise_carte 
* -------------------------------
* Applee pour faire la reprise du vehicule
* Sert a authentifier un clients auqui 
* 	son vehicule est deja en charge
*
* Arguments:
* -------------------------------
* numCarte <unsigned int> : numero de la carte lue
*
* return:
* -------------------------------
* 1 dans le cas le numero de la carte 
* 	a la 2eme insersion coincide avec 
*	celui de la premiere
* 0 dans le cas contraire
*/


/*!
* Fonction: verifier 
* -------------------------------
* Similaire la la fonction authentifier()
* 	mais utilisee sans devoir modifier 
*	le numero de la carte courante
* juste pour faire une verification
* de numero de carte sans authentification
*	
* Arguments:
* -------------------------------
* numCarte <unsigned int> : numero de la carte lue
*
* return:
* -------------------------------
* 1 dans le cas le numero de la carte coincide 
* 	avec un des numeros dans le fichier ".txt"
* 0 dans le cas contraire
*/

#endif // BASE_CLIENTS_H