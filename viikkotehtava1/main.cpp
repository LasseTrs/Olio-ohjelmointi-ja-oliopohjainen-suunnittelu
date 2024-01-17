#include <iostream>
#include <ctime>


using namespace std;

void arvausFunktio(){
    srand(time (NULL));

    int satluku = rand() % 20;
    int arvaus = 0;
    //cout << satluku << endl; debuggaus

    do {
        cout << "Arvaa luku 1-20" << endl;
        cin >> arvaus;
        if (arvaus > satluku)
            cout << "Arvasit liian suuren luvun" << endl;
        if (arvaus < satluku)
            cout << "Arvasit liian pienen luvun" << endl;
        if (arvaus == satluku){
            cout << "arvasit oikein" << endl;
        }
    } while (arvaus != satluku);

}


int main()
{
    arvausFunktio();

    return 0;
}
/*
    srand(time (NULL));

    int satluku = rand() % 40;
    cout << satluku;

 */
