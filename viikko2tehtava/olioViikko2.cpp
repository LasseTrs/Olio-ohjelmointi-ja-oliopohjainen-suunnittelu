#include <olioViikko2.h>
#include <iostream>
using namespace std;







void gameObject()
{
    srand(time (NULL));
    int satluku = rand() % 10;
    int arvaus = 0;
    int arvausKerrat = 0;
    do {
        cout << "Arvaa luku 1-10" << endl;
        cin >> arvaus;
        arvausKerrat++;

        if (arvaus > satluku)
            cout << "Arvasit liian suuren luvun" << endl;
        if (arvaus < satluku)
            cout << "Arvasit liian pienen luvun" << endl;
        if (arvaus == satluku){
            cout << "arvasit oikein " << arvausKerrat << " kerralla" << endl;
        }
    } while (arvaus != satluku);

}


