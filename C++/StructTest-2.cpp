#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    struct ocena
    {
        float ocena;
        int waga;
    };

    float srednia = 0;
    float oceny = 0;
    int wagi = 0;

    ocena ocena1 = {4, 2};
    ocena ocena2 = {5, 1};
    ocena ocena3 = {5, 1};
    ocena ocena4 = {6, 1};
    ocena ocena5 = {5, 1};
    ocena ocena6 = {4, 2};

    oceny += ocena1.ocena * ocena1.waga;
    oceny += ocena2.ocena * ocena2.waga;
    oceny += ocena3.ocena * ocena3.waga;
    oceny += ocena4.ocena * ocena4.waga;
    oceny += ocena5.ocena * ocena5.waga;
    oceny += ocena6.ocena * ocena6.waga;

    wagi += ocena1.waga;
    wagi += ocena2.waga;
    wagi += ocena3.waga;
    wagi += ocena4.waga;
    wagi += ocena5.waga;
    wagi += ocena6.waga;

    srednia = oceny / wagi;

    cout << srednia;

        return 0;
}

