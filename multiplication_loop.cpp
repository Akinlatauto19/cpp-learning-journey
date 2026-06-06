#include <iostream>

using namespace std;

int main()
{
  int number;
  cout << " what number is your multiplication table " << endl;
  cin >> number;
    for ( int i = 1;  i <= 12; i++ )
    cout << "result:" << number * i << endl;

    return 0;

}