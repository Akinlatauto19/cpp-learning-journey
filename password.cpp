#include <iostream>

using namespace std;

int main()
{
  int pin = 1245;
  int enterpin;
  cout << " enter your password:" << endl;
  cin >> enterpin;
  while( enterpin != pin )
 {
     cout << " wrong pin try again" << endl;
     cout << " enter your password:" << endl;
      cin >> enterpin;

 }

    cout << "access granted"<< endl;
    return 0;

}