#include <iostream>
#include <italianchef.h>
#include <chef.h>
#include <string>
using namespace std;

int main()
{
    chef Jyrki;
    Jyrki.setNimi("Chef Jyrki");
    Jyrki.makeSalad1();
    italianChef Mario;
    Mario.setNimi("Chef Mario");
    Mario.makePasta();
    Jyrki.makeSoup1();
    return 0;
}
