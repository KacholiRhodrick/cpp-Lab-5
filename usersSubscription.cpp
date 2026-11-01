#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{

    srand(static_cast<unsigned int>(time(0)));
    int DaysUntillExpiration = rand() % 12;

    if (DaysUntillExpiration == 0)
    {
        cout << "your subscription has expired." << endl;
    }
    else if (DaysUntillExpiration == 1)
    {
        cout << "your subscription expires within a day!" << endl;
        cout << "renew now and save 20%!" << endl;
    }
    else if (DaysUntillExpiration <= 5)
    {
        cout << "your suscription expires in " << DaysUntillExpiration << endl;
        cout << "renew now and save 10%!" << endl;
    }
    else if (DaysUntillExpiration <= 10)
    {
        cout << "your subscription will expire soon. Renew now!" << endl;
    }
    else
    {
        cout << "you have an active subscription." << endl;
    }

    return 0;

}    