#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
#include <string>
using namespace std;

class italianChef: public chef
{
public:
    italianChef();
    ~italianChef();
    int jauhot = 250;
    int vesi = 100;

    void makePasta();
    void resepti();
    //virtual void makeSalad1() override;
 //  virtual void makeSoup1() override;

};

#endif // ITALIANCHEF_H
