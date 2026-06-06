#include <iostream>

using namespace std;

int main()
{

    string name;
     int score;

     cout << "what is your name" << endl;
     cin >> name;
      cout << "what is your score" << endl;
      cin >> score;
     if  ( score >= 70 )
    {
     cout << " Grade: A "  << endl;

    }
    else if ( score >= 60 && score <= 69 )
    {
       cout << " Grade: B "  << endl;
    }
    else if ( score >= 50 && score <= 59 )
     {
       cout << " Grade: C "  << endl;
    
     }
    else if ( score >= 40 && score <= 49 )
     {
       cout << " Grade: D "  << endl;
    
     }
    else  
     {
       cout << " Grade F " << endl;
     }
    
     cout << " excellent " <<  (score >= 70 ) << endl;
     cout << "very good " << ( score >= 60 && score <= 69 ) << endl;
     cout << "good " << ( score >= 50 && score <= 59 ) << endl;
     cout << " pass " << ( score >= 40 && score <= 49 ) << endl;
     cout << "failed " << ( score <= 39 ) << endl;
      if ( score >=90 )
      {
        cout << "fantastic performance keep it up" << endl;
      }
     
     
    return 0;
}