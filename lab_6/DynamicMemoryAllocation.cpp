#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfCharacters;

    // allocate an int dynamically
    int *number = new int(sizeof(int));

    cout << "Enter an integer: ";
    cin >> *number;

    cout << *number << endl;

    // allocate a string dynamically
    // cout << "How long is your word?" << endl;
    // cin >> numberOfCharacters;
    // char myString[numberOfCharacters];
    // cout << "Enter your word" << endl;
    // cin >> myString;
    // cout << "Your word is:" << myString;

    string *myString = nullptr;
    char temp[100]; // to store string temporalily, temp acting as buffer

    // capture the string
    cout << "Enter the string: " << endl;
    cin >> temp;                     // capture string
    cin.getline(temp, sizeof(temp)); // store string in temp (buffer)

    // allocate memory for string dynamically
    myString = new string(temp);

    cout << "Your word is " << *myString << endl;

    // deallocate memory
    delete number;
    delete myString;

    return 0;
}