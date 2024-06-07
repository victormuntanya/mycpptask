#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Create and initialize the array
    string stringArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Get the length of the array
    int arrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    // Loop through the array
    for (int i = 0; i < arrayLength; i++)
    {
        // Get the current element
        const string currentElement = stringArray[i];

        // Get the first letter of the current element
        const char firstLetter = currentElement[0];

        // Check if the first letter is 'B'
        if (firstLetter == 'B')
        {
            // Print the element if the first letter is 'B'
            cout << currentElement << endl;
        }
    }

    return 0;
}