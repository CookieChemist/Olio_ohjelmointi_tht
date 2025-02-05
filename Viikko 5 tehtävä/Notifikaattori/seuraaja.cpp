#include "seuraaja.h"

Seuraaja::Seuraaja(string n){
    nimi = n;
}

string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(string paivitys){
    cout << nimi << " sai viestin: '" << paivitys << "'" << endl;
}
