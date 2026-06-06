#include <iostream>

using namespace std;

int main()
{

    int grade;

     cout << "enter your grade" << endl;
     cin >> grade;
    

     if  ( grade >= 70 )
    {
     cout << " first position"  << endl;

    }
    else if ( grade >= 60 )
     {
       cout << " second position"  << endl;
    }
    else if ( grade >= 50)
     {
       cout << " third position"  << endl;
    }
    else if ( grade >= 40)
     {
       cout << " fourth position"  << endl;
    }
    else  
     {
       cout << " failed " << endl;
    }
    return 0;
}