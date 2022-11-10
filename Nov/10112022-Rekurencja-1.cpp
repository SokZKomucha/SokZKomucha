#include <iostream>

using namespace std;

int silniaR(int n);
int nwdR(int a, int b);
int pwrR(int a, int n); 

int main()
{

    int silnia;
    int NWD1;
    int NWD2;
    float PWR1;
    float PWR2;

    cout << "Silnia z ";
    cin >> silnia;
    cout << "Silnia z " << silnia << " to " << silniaR(silnia);
    cout << endl << endl;

    cout << "NWD ";
    cin >> NWD1;
    cout << "z ";
    cin >> NWD2;
    cout << "Wynosi " << nwdR(NWD1, NWD2);
    cout << endl << endl;

    cout << "Liczba - ";
    cin >> PWR1;
    cout << "Wykladnik - ";
    cin >> PWR2;
    cout << PWR1 << " do potegi " << PWR2 << " wynosi " << pwrR(PWR1, PWR2);
    cout << endl << endl;

    return 0;
}

int silniaR(int n)
{
    if (n == 0)
        return 1;
    else 
        return n * silniaR(n-1);
}

int nwdR(int a, int b)
{
    if (a == b) 
        return a;
    else if (a > b) 
        return nwdR(a - b, b);
    else 
        return nwdR(a, b - a);
}

int pwrR(int a, int n)
{   
    if (a == 0 && n == 0)
        return 0;
    else if (a != 0 && n == 0)
        return 1;
    else if (n == 1)
        return a;
    else if (n > 1)
        return a * pwrR(a, n - 1);
}
