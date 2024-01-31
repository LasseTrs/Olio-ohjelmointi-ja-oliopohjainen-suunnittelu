#include "chef.h"
#include <iostream>
#include <string>
using namespace std;


chef::chef()
{

    cout  << nimi2 << " konstruktori" << endl;


}
void chef::setNimi(string inimi)
{
    nimi2 = inimi;
}

chef::~chef()
{
    cout << nimi2 << " destruktori" << endl;
}
void chef::makeSalad1()
{
    cout << nimi2 << " tekee salaattia" << endl;
}

void chef::makeSoup1()
{
    cout << nimi2 << " tekee keittoa" << endl;
}

void chef::makeSalad()
{
    cout << nimi2 << " tekee salaattia" << endl;
}

void chef::makeSoup()
{
    cout << nimi2 << "tekee keittoa" << endl;
}
