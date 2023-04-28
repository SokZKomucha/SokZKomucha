#include <iostream>

using namespace std;

int main()
{

    int a = 112;    // BIN 01110000
    int b = 97;     // BIN 01100001

    int c = a ^ b;  // XOR 00010001
    int d = a & b;  // AND 01100000
    int e = a | b;  // OR  01110001

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

}