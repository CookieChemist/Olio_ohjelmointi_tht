#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    cout << "Notifikaattori luotu" << endl;
}


void Notifikaattori::lisaa(Seuraaja *lisattavaSeuraaja){
    cout << "\nLisataan seuraajaa" << endl;
    if(seuraajat == nullptr){
        seuraajat = lisattavaSeuraaja;
        cout << "Ensimmainen Seuraaja " << seuraajat->getNimi() << " lisatty" << endl;

    } else{
        lisattavaSeuraaja->next = seuraajat;
        seuraajat = lisattavaSeuraaja;
        cout << "Seuraaja " << seuraajat->getNimi() << " korvannut seuraajan " << seuraajat->next->getNimi() << " listan ensimmaisena" << endl;
    }
}

void Notifikaattori::poista(Seuraaja *poistettavaSeuraaja){
    cout << "\nPoistetaan seuraajaa " << poistettavaSeuraaja->getNimi() << endl;
    Seuraaja *o = seuraajat;
    while(o->next != poistettavaSeuraaja){
        o = o->next;
    }
    o->next = o->next->next;

}

void Notifikaattori::tulosta(){
    cout << "\nTulostetaan kaikki seuraajat" << endl;
    Seuraaja *o = seuraajat;
    while(o != nullptr){
        cout << o->getNimi() << endl;
        o = o->next;
    }
    cout << "Seuraajat tulostettu" << endl;
}

void Notifikaattori::postita(string viesti){
    cout << "\nLahetetaan seuraajalle viesti '" << viesti << "'" << endl;
    Seuraaja *o = seuraajat;
    while(o != nullptr){
        o->paivitys(viesti);
        o = o->next;
    }
}
