#include <iostream>
#include <ctime>


using namespace std;

void arvausFunktio(){
    srand(time (NULL));

    int satluku = rand() % 40;
    int arvaus = 0;
    int arvausKerrat = 0;
    //cout << satluku << endl; debuggaus

    do {
        cout << "Arvaa luku 1-40" << endl;
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

 // muutettu funktiota arvausväli suuremmaksi ja lopuksi ilmoittaa arvaustenmäärän





int main()
{
    arvausFunktio();

    return 0;
}
