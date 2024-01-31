#include "italianchef.h"
#include <iostream>
#include <chef.h>
#include <string>
using namespace std;

italianChef::italianChef()
{
    cout << nimi << " konstruktori" << endl;


   italianChef::makeSalad1();  //override näihin ja kokin nimen vaihto
   italianChef::makeSoup1();


}


italianChef::~italianChef()
{
    cout << nimi << " destruktor" << endl;

}

void italianChef::makePasta()
{
cout << " pasta" << endl;
}
void italianChef::makeSalad1()
{
    cout << nimi << "tekee salaattia" << endl;
}
void italianChef::makeSoup1()

{
    cout << nimi << "tekee keittoa" << endl;
}

