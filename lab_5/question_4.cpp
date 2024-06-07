#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int userInput;
    cout << "Enter a value between 5 and 10: ";
    cin >> userInput;

    while (!(userInput >= 5 && userInput <= 10))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nSorry, you have entered an invalid number. Please try again." << endl;
        cout << "Enter a value between 5 and 10: ";
        cin >> userInput;
    }

    cout << "Your input value (" << userInput << ") has been accepted." << endl;

    return 0;
}