#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include <kerros.h>
#include <asunto.h>

class Kerrostalo:public Kerros, public Asunto, public Katutaso
{
public:
    Kerrostalo();
    // virtual void Kerros_public() override;
    void ekaKerros();
    void tokaKerros();
    void kolmasKerros();
    void kulutus(int);
};

#endif // KERROSTALO_H
