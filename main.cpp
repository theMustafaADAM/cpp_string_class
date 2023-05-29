#include "clsString.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "OOP Projects : String Class!" << endl;

    clsString string1;
    clsString string2("Moustapha Adam Tahir Moustafa");

    string1.Set_value("Hamid Shah");

    cout << "The Count of entered string = " << string1.CountWords() << endl;
    cout << "The Count of entered string = " << string2.CountWords() << endl;
    cout << "The Count of entered string = " << clsString::CountWords("Abdullah Ahmed Fallatah") << endl;

    string1.InvertAllCaseString();  cout << string1.Get_value() << endl;
    cout << string2.CountingLetters() << endl;
    cout << string2.CountExactLetter('a') << endl;

    return 0;
}
