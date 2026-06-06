#include <iostream>

using namespace std;

int main()
{

    
   int score;

    cout << "enter your score" << endl;
    
    cin >> score;

    if  (score >= 60 )
    {
     cout << " you passed the test"  << endl;

    }
    else
     {
       cout << " you failed the test" << endl;
    }
    
    return 0;
}