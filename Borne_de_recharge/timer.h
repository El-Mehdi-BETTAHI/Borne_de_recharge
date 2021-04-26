                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "timer.h"			            //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

class Timer
{
  public : 
	void timer_initialiser();
	void timer_raz();
	int timer_valeur();

};

/*!
* Fonction: timer_initialiser 
* -------------------------------
* acceder a la memoire du timer
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
*
*/


/*!
* Fonction: timer_raz 
* -------------------------------
* remise a zero du timer
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* 
*/

/*!
* Fonction: timer_valeur 
* -------------------------------
* calcul le temps ecoule depuis la remise a zero
*
* Arguments:
* -------------------------------
*
* return:
* -------------------------------
* temps ecoule depuis la remise a zero 
*	=> valeur du timer actuelle - depart_timer
*
*/


#endif // TIMER_H
