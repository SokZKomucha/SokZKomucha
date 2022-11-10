#include <iostream>

using namespace std;

int main()
{

    string opcja;
    string cont;
    double a = 0; // Liczba 1
    int floor_a = 0; // U¿ywany przy silnii
    double b = 0; // Liczba 2
    int floor_b = 0; // U¿ywany przy potêgowaniu

    // Trochê zmiennych u¿ywanych przy silnii
    int silnia_temp = 1;
    int silnia_wynik = 1;

    double temp = 0; // G³ównie do przechowywania wyniku
    int while_t = 1; // U¿ywany przy tej jednej du¿ej pêtli do while

    do{

    cout<<"Podaj liczbe A - ";
    cin>>a;

    cout<<"Wybierz dzialanie:\n+ - Dodawanie\n- - Odejmowanie\n* - Mnozenie\n/ - Dzielenie\n^ - Potegowanie\n! - Silnia\n";
    cin>>opcja;

    // Mia³em tak¹ ochotê u¿yæ funkcji "switch", ale "error: switch quantity not an integer"

    // Przy ka¿dym warunku dodatkowo dajê odpowiedŸ na podanie numeru; gdyby u¿ytkownik
    // pomyœla³, ¿e wpisanie np "3" zamiast "*" by³o lepsz¹ rzecz¹ do zrobienia

//---------------------------------------------------------------
    // Dodawanie
    if (opcja == "+" || opcja == "1")
    {
        cout<<"Podaj liczbe B - ";
        cin>>b;
        temp = a + b;
        cout<<"Wynik dodawania to "<<temp;
    }

//---------------------------------------------------------------
   // Odejmowanie
    else if (opcja == "-" || opcja == "2")
    {
        cout<<"Podaj liczbe B - ";
        cin>>b;
        temp = a - b;
        cout<<"Wynik odejmowania to "<<temp;
    }

//---------------------------------------------------------------
    // Mno¿enie
    else if (opcja == "*" || opcja == "3")
    {
        cout<<"Podaj liczbe B - ";
        cin>>b;
        temp = a * b;
        cout<<"Wynik mnozenia to "<<temp;
    }

//---------------------------------------------------------------
    // dzielenie
    else if (opcja == "/" || opcja == "4")
    {
        cout<<"Podaj liczbe B - ";
        cin>>b;

        // Sprawdza czy b nie jest 0
        if (b != 0)
        {
            temp = a / b;
            cout<<"Wynik mnozenia to "<<temp;
        }
        else if (b == 0)
        {
            cout<<"Nie mozna dzielic przez 0; sproboj ponownie";
        }
    }

    // Potêgowanie
    else if (opcja == "^" || opcja == "5")
    {
        cout<<"Podaj liczbe B - ";
        cin>>b;
        floor_b = b; // flooruje B
        temp = 1 ;

        // Wykonuje potêgowanie, wyk³adnik jest naturalny ( floor(b) )
        while (floor_b > 0)
        {
            temp = temp * a;
            floor_b = floor_b - 1;
        }
        cout<<"Wynik potegowania to "<<temp;
    }

//---------------------------------------------------------------
    // Silnia
    else if (opcja == "!" || opcja == "6")
    {
        floor_a = a; // flooruje A

        // Algorytm silnii
        while (a >= silnia_temp)
        {
            silnia_wynik = silnia_wynik * silnia_temp;
            silnia_temp++;
        }
        cout<<"Wynik silnii to "<<silnia_wynik;
    }

//---------------------------------------------------------------

    // Pyta o to, czy u¿ytkownik chce kontynuowaæ
    cout<<"\n\nCzy chcesz kontynuowac (T/N) ";
    cin>>cont;
    if (cont == "T" || cont == "t" || cont == "tak" || cont == "Tak" || cont == "TAK" || cont == "1") // Gdyby u¿ytkownik postanowi³ wpisaæ cokolwiek innego ni¿ samo "T"
        while_t = 1;
    else if (cont == "N" || cont == "n" || cont == "nie" || cont == "Nie" || cont == "NIE" || cont == "2")
        while_t = 0;
    else
        while_t = 0;

    // Domyœlam siê, ¿e te wszystkie opcje nie s¹ potrzebne i da³oby siê zrobiæ lepiej, aczkolwiek dzia³a - dzia³a

    } while (while_t == 1);

    return 0;
}

// Te wszystkie d³ugie kreski w komentarzach s¹ po to, by zachowaæ jakiœ porz¹dek w kodzie
// Komentarze opsiuj¹ niemal¿e ka¿d¹ funkcjê kodu, by siê w nim nie pogubiæ


