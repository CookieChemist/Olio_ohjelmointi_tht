#include <iostream>
using namespace std;

#include "seuraaja.h"

#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

class Notifikaattori
{
    public:
        Notifikaattori();
        void lisaa(Seuraaja *);
        void poista(Seuraaja *);
        void tulosta();
        void postita(string);

    private:
        Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
