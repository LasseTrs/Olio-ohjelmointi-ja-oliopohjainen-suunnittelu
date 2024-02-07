#include "kerros.h"
#include "asunto.h"
#include <iostream>
using namespace std;

Kerros::Kerros() {
    cout <<  "Maaritetaan kerroksen asuntoja"  << endl;
}

void Kerros::Kerros_public()
{
    cout <<  "Maaritetaan kerroksen asuntoja"  << endl;
  Asunto::Asunto_public();
    Asunto::Asunto_public();
  Asunto::Asunto_public();
    Asunto::Asunto_public();
}
