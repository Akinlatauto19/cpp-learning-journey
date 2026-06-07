#include <iostream>

using namespace std;

int main()
{
 int numberR, numberC;
  cout << "Enter number of row " << endl;
  cin >> numberR;
    cout << "Enter number of column " << endl;
  cin >> numberC;

  for ( int i = 1; i <= numberR; i++)
  {
    for ( int j = 1; j <= numberC; j++)
    {
        cout << "#";
    }
    cout  << endl;
  }
    

    return 0;

}