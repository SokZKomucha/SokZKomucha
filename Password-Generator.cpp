#include <iostream>     // iostream
#include <string>       // used to combine chars into password
#include <cstdlib>      // used to generate random integers
#include <time.h>       // used to generate random integers

using namespace std;    // namespace std

const int passwordLength = 16;  // Password's length

int main()
{   

    srand(time(NULL));  // Generates random seed 

    int generatedIntegers [passwordLength];     // Stores generated integers in an array
    string password;                            // Stores password made up from chars

    // Writes random integers (33-126) to an array  
    for (int i = 0; i < passwordLength; i++)
    {
        generatedIntegers [i] = rand() % 94 + 33;
    }
        
    // Converts generated integers into chars, then adds them to password string
    for (int i = 0; i < passwordLength; i++)
    {
        char passwordCharacter = generatedIntegers [i];
        password.push_back(passwordCharacter);
    }
    
    // Prints out generated password
    cout << password;

    // Return 0
    return 0;
}