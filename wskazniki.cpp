#include <iostream>
using namespace std;
main(){
    int ti [6];
    float tf [6];
    int *wi;
    float *wf;
    wi=&ti[0];
    wf=&tf[0];
    cout<< "jak przy inkrementacji wskaznikow zmieniaja sie adresy: \n";

    for (int i=0; i<6; i++, wi++, wf++){
    cout<<"i= "<<i<<"wi= "<<(unsigned long) wi<<"wf= "<<(unsigned wf) wf<<endl;

    }
    
}