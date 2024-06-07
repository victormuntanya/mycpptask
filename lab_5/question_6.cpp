#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int countVowels(string str);
int countWords(string str);
string reverseWords(string str);
string reverseRecursively(string str);
string capitalizeSecondLetter(string str);

int main()
{
    // Open text file
    fstream file("text.txt");

    // Assign content to string fileContent
    string fileContent;

    if (file.is_open())
    {
        getline(file, fileContent);

        cout << "Original message: " << fileContent << endl;
        cout << "Number of vowels: " << countVowels(fileContent) << endl;
        cout << "Number of words: " << countWords(fileContent) << endl;
        cout << "Reverse words: " << reverseWords(fileContent) << endl;
        cout << "Capitalize second: " << capitalizeSecondLetter(fileContent) << endl;
    }

    return 0;
}

int countVowels(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        switch (toupper(str[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:
            break;
        }
    }

    return count;
}

int countWords(string str)
{
    int count = 0;
    bool isWord = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] == ' ') && !isWord)
        {
            isWord = true;
            count++;
        }

        if (str[i] == ' ')
        {
            isWord = false;
        }
    }

    return count;
}

string reverseRecursively(string str)
{
    if (str == "")
    {
        return "";
    }
    else
    {
        return reverseRecursively(str.substr(1)) + str[0];
    }
}

string reverseWords(string str)
{
    string output = "";
    int i = 0;

    while (i < str.length())
    {
        output = output + str[str.length() - 1 - i];
        i++;
    }

    return output + "\0";
}

string capitalizeSecondLetter(string str)
{
    string result = "";
    bool isNewWord = true;
    bool shouldCapitalize = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && isNewWord)
        {
            isNewWord = false;
            result += str[i];
            shouldCapitalize = true;
            continue;
        }

        if (shouldCapitalize && str[i] != ' ')
        {
            result += toupper(str[i]);
            shouldCapitalize = false;
            continue;
        }

        if (str[i] == ' ')
        {
            isNewWord = true;
        }

        result += str[i];
    }

    return result;
}