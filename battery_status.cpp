#include <iostream>

using namespace std;

int main()
{

    int percentage;

     cout << "enter your battery percentage" << endl;
     cin >> percentage;
    

     if  ( percentage >= 80 )
    {
     cout << " full "  << endl;

    }
    else if ( percentage  >= 50 && percentage <= 79 )
    {
       cout << " good "  << endl;
    }
    else if ( percentage >= 20 && percentage <= 49 )
     {
       cout << " low "  << endl;
    
     }
    else  
     {
       cout << " critical low need charging " << endl;
     }
    return 0;
}