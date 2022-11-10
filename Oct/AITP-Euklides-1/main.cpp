#include <iostream>

using namespace std;

int main()
{

    int a;
    int b;

    cout<<"Podaj A i B"<<endl;
    cin>>a;
    cin>>b;

//------------------------------
    if (a < 0)
        a = a * -1;

    if (b < 0)
        b = b * -1;

//------------------------------
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    cout<<"NWD - "<<a;

//------------------------------
    return 0;
}
