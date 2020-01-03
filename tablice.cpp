#include <iostream>

using namespace std;
void potrojenie (int ile, long tablica []);

main(){


const int rozmiar=200;
long widmo [rozmiar];

    for(int i=o; i<rozmiar; i++)
    {
        widmo [i]=i;
        if (i<6)
        cout<<"i= "<<i<<" = "<<widmo[i]<<endl;

    }
    potrojenie (rozmiar, widmo)
    cout<<"Po wywolaniu funkcji \n";
    for(i=0; i<4; i++){
        cout<<"i="<<i<<"="<<widmo[i]<<endl;
    }

    void potrojenie (int ile, long tablica[]){
        for(int i=0; i<ile; i++)
        {
            tablica[i] *=3;
        }

    }
return 0;
}