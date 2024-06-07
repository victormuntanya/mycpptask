#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int days_until_expiration = rand() % 12;

    if (days_until_expiration > 10)
    {
        cout << "You have an active subscription." << endl;
    }
    else if (days_until_expiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }
    else if (days_until_expiration <= 1)
    {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    else if (days_until_expiration <= 5)
    {
        cout << "Your subscription expires in " << days_until_expiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    else
    {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }

    return 0;
}
