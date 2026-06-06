#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
    cout << "enter first value:" << endl;
    cin >> a;
    cout << "enter second value:" << endl;
    cin >> b;
    cout << "enter third value:" << endl;
    cin >> c;
  cout << " result:" << (a > b && b < c) << endl;
  cout << " result:" << ( a <= c || c >= b ) << endl;
  cout << " result:" <<  !( a == b) << endl;
  return 0;
  
}