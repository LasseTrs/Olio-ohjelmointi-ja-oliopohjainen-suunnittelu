#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto() {
    cout <<  "Asunto luotu"  << endl;


}


Asunto::~Asunto()
{

}

void Asunto::Asunto_public()
{
    cout <<  "Asunto maaritetty asukkaita= " << asukas << "nelioita= " << nelio  << endl;
}

void Asunto::maarita(int a1, int a2)
{
    asukas = a1;
    nelio = a2;



}

void Asunto::laskeKulutus(int b1, int b2)
{
    cout <<  "asunnon kulutus, kun hinta=" << b1 << " on " << b2  << endl;

}

