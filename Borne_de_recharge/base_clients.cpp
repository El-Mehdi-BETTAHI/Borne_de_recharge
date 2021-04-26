                                                                                            /************************************************/
                                                                                            //                                              //
                                                                                            //              "base_clients.cpp"              //
                                                                                            //                                              //
                                                                                            //              Auteurs :                       //
                                                                                            //              - BETTAHI EL MEHDI              //
                                                                                            //              - ABOUYAAQOUB BADR              //
                                                                                            //                                              //
                                                                                            /************************************************/

#include "base_clients.h"

using namespace std;

unsigned short int numCarte_courant;

int BaseClients :: authentifier(unsigned int numCarte){
    ifstream list;
    list.open("/home/etudiant/Bureau/BorneRecharche/projet_uml_c++/base.txt");
    if(!list){
        cerr << "err ! file not opened" << endl;
        return 0;
    }
    else{
        string data;
        vector<string> content_file ;
        ostringstream a; // conversion int to string
        a << numCarte;
        int count =0 ;
        while(list >> data){
            content_file.push_back(data);
            count ++;
        }
        for (int i=0 ; i<count ; ++i){
            if(a.str() == content_file[i]){
                list.close();
                numCarte_courant=numCarte;
                return 1;
            }
        }
    }
    list.close();
    return 0;
}

int BaseClients :: reprise_carte(unsigned int numCarte){
    if(numCarte==numCarte_courant && authentifier(numCarte)) return 1;
    else return 0;
}

int BaseClients :: verifier(unsigned int numCarte){
    ifstream list;
    list.open("/home/etudiant/Bureau/BorneRecharche/projet_uml_c++/base.txt");
    if(!list){
        cerr << "err ! file not opened" << endl;
        return 0;
    }
    else{
        string data;
        vector<string> content_file ;
        ostringstream a; // conversion int to string
        a << numCarte;
        int count =0 ;
        while(list >>data){
            content_file.push_back(data);
            count ++;
        }
        for (int i=0 ; i<count ; ++i){
            if(a.str() == content_file[i]){
                list.close();
                return 1;
            }
        }
    }
    list.close();
    return 0;
}
