#include <iostream>
#include <stdlib.h>
#include <new.h>

using namespace std;
void funkcja_alarmowa();
long k;
main (){

set_new_handler (funkcja_alarmowa);
for (k=0; ; k++){
    new int;
}
}
void funkcja_alarmowa (){

    cout<< "\n zabraklo pamieci przy k= "<<k<<endl;
    exit(1;)
}


