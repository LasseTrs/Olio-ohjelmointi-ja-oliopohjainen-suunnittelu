#include "chef.h"
#include <iostream>
#include <string>
using namespace std;


chef::chef()
{

    cout  << nimi << " konstruktori" << endl;
    chef::makeSalad();
    chef::makeSoup();

}

chef::~chef()
{
 cout << nimi << "destruktori" << endl;
}
void chef::makeSalad1()
{
    cout << nimi << "tekee salaattia" << endl;
}

void chef::makeSoup1()
{
    cout << nimi << "tekee keittoa" << endl;
}

void chef::makeSalad()
{
    cout << nimi << "tekee salaattia" << endl;
}

void chef::makeSoup()
{
    cout << nimi << "tekee keittoa" << endl;
}
