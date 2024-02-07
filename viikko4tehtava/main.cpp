#include <iostream>
#include <asunto.h>
#include <kerros.h>
#include <katutaso.h>
#include <kerrostalo.h>


using namespace std;

int main()
{
    //Asunto Asunto;
   // Asunto.Asunto_public();
    //Asunto.laskeKulutus(1, 200);
    //Katutaso Katutaso;
    //Katutaso.Katutaso1();
    //Katutaso.Katutaso1();
    //Kerros Kerros;
    //Kerros.Kerros_public();

    Kerrostalo Kerrostalo;
    Kerrostalo.ekaKerros();
    Kerrostalo.tokaKerros();
    Kerrostalo.kolmasKerros();
    Kerrostalo.kulutus(1);

    return 0;
}
