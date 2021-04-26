                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "timer.cpp"			            //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "timer.h"

using namespace std;
entrees* timer;
int depart_timer;

void Timer :: timer_initialiser(){
    timer=acces_memoire(&shmid);
    if(timer == 0) cout << "err pas de mem shmid" << endl;
    depart_timer = timer->timer_sec;
}

void Timer :: timer_raz(){
    depart_timer = timer->timer_sec;
}

int Timer :: timer_valeur(){
    return timer->timer_sec - depart_timer;
}
