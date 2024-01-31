#ifndef CHEF_H
#define CHEF_H

#include <string>
using namespace std;
//perittävä
class chef
{
public:
    chef();
    ~chef();
    string nimi = "Gordon Ramsay ";




     void makeSalad();
   void makeSoup();
     virtual void makeSalad1();
     virtual void makeSoup1();

};

#endif // CHEF_H
