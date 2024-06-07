#include <iostream>

using namespace std;

void displayMenu();
double calculateSquareArea(double side);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main()
{
    while (true)
    {
        int choice;

        displayMenu();
        cin >> choice;

        while (!(choice >= 1 && choice <= 4))
        {
            cout << "Your input was: " << choice << " which is an invalid input" << endl;
            cout << "Please enter a valid input!" << endl;

            displayMenu();
            cin >> choice;
        }

        if (choice == 1)
        {
            double side;
            cout << "Enter side length: ";
            cin >> side;
            cout << "Area is " << calculateSquareArea(side) << endl;
        }
        else if (choice == 2)
        {
            double length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area is " << calculateRectangleArea(length, width) << endl;
        }
        else if (choice == 3)
        {
            double base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            cout << "Area is " << calculateTriangleArea(base, height) << endl;
        }
        else if (choice == 4)
        {
            break;
        }
    }

    return 0;
}

void displayMenu()
{
    cout << "\n\nPlease select the shape of the area to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program" << endl;
    cout << "\nEnter Selection: ";
}

double calculateSquareArea(double side)
{
    return calculateRectangleArea(side, side);
}

double calculateRectangleArea(double length, double width)
{
    return length * width;
}

double calculateTriangleArea(double base, double height)
{
    return 0.5 * base * height;
}