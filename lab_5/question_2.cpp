#include <iostream>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 11
    int days_until_expiration = rand() % 12;
    cout << days_until_expiration << endl; // Output the randomly generated number

    switch (days_until_expiration)
    {
    case 0:
        cout << "Your subscription has expired." << endl;
        break;
    case 1:
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Your subscription expires in " << days_until_expiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Your subscription will expire soon. Renew now!" << endl;
        break;
    default:
        cout << "You have an active subscription." << endl;
        break;
    }

    return 0;
}
