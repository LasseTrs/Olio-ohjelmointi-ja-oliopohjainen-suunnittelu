#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo() {



}

void Kerrostalo::ekaKerros()
{
    Kerros::Kerros_public();
}

void Kerrostalo::tokaKerros()
{
    Kerros::Kerros_public();
}

void Kerrostalo::kolmasKerros()
{
    Kerros::Kerros_public();
}

void Kerrostalo::kulutus(int)
{
   cout <<  "Kerrostalon kulutus =" << 2000 << endl;
}
