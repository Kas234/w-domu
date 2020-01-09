#include <iostream>
#include "tstring.h"
using namespace std;
int main () {
    TString s1;
    TString s2("inicjalizacja slowem");
    TString s3 ( s2 ); 
    s3 = "alfa beta";
    s3 = s2;
    TString s4 = std::move( s2 );
    s3 = std::move( s1 );
    for (auto&n:s1) {++n;} endl (cout);
    for (const auto&n:s1) cout<<n<<"-"; cout<<endl;
}