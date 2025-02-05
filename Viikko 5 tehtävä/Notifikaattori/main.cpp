#include <iostream>
using namespace std;

#include "notifikaattori.h"

int main()
{
    Notifikaattori n;
    Seuraaja a("Anton");
    Seuraaja b("Bertti");
    Seuraaja c("Chuck");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();

    n.poista(&b);

    n.tulosta();

    n.postita("Pulla on makoisaa");

}
