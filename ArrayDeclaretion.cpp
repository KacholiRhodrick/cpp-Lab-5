#include <iostream>
#include <string>
#include <array>

using namespace std; 

int main()
{
   string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179", "G789"};
   
    int arraysize = sizeof(elements) /sizeof(elements[0]);

   // cout << arraysize << " " << elements[7] << endl;

    for (int i = 0; i < arraysize; i++)
    {
        if (elements[i][0] == 'B')
        {
            cout << elements[i] << endl;
        }
        
    }
    
    return 0 ;
}
