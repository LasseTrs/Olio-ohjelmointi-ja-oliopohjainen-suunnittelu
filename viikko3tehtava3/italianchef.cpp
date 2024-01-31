#include "italianchef.h"
#include <iostream>
#include <chef.h>
#include <string>
#include <string>
using namespace std;

italianChef::italianChef()
{
    cout << nimi2 << " konstruktori" << endl;





}


italianChef::~italianChef()
{
    cout << nimi2 << " destruktor" << endl;

}

void italianChef::makePasta()
{
    cout << nimi2 << " tekee pastaa erikoisreseptilla" << endl;
}

void italianChef::resepti()
{
    cout << nimi2 << " tekee jauhot " << jauhot << endl;
    cout << nimi2 << " tekee vesi " << vesi << endl;
}
/*
void italianChef::makeSalad1()
{
    cout << nimi2 << " tekee salaattia" << endl;
}
void italianChef::makeSoup1()

{
    cout << nimi2 << " tekee keittoa" << endl;
}
*/
