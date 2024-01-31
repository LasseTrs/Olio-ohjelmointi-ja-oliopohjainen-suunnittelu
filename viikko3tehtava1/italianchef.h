#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class italianChef: public chef
{
public:
    italianChef();
    ~italianChef();
    string nimi = "Anthony Bourdain ";
    void makePasta();

    virtual void makeSalad1() override;
    virtual void makeSoup1() override;

};

#endif // ITALIANCHEF_H
