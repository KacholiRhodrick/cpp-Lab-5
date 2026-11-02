#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{

    srand(static_cast<unsigned int>(time(0)));
    int DaysUntillExpiration = rand() % 12;

   switch (DaysUntillExpiration )
   {
   case 0:
    cout << "your subscription has expired." << endl;
    break;
   
    case 1:
    cout <<"your subscription expires wiyhin a day" << endl;
    cout << "Renew now and save 20%" << endl;
    break;

    case 2:
    case 3:
    case 4:
    case 5:
    cout << "your subscription expires in " << DaysUntillExpiration << " days" << endl;
    cout << "Renew now and save 10%!" << endl;
    break;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    cout << "your subscripyion will expire soon. Renew now!" << endl;
    break;

   default:
   // for the rest
   cout << "you have an active subscription" << endl;
    break;
   } 

   return 0;
}    