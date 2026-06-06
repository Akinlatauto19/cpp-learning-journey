#include <iostream>

using namespace std;

int main()
{
  int choice;

   
  
 do
{
  cout << "1. print your name" << endl;
  cout << "2. print your age"  << endl;
  cout << "3. print your height" << endl;
  cout << "4. exit"<< endl;
  cin >> choice;

  if ( choice == 1)
  {
    cout << "Akinkunmi"<< endl;
  }
 else if ( choice == 2)
  {
 cout  << "15" << endl;
  }
  else if ( choice == 3)
  {
    cout << "5.9 " << endl;

  }
  else if ( choice == 4 ) 
  {
    cout << "goodbye" << endl;
  }
  else
  {
    cout << " invalid" << endl;
  }
}
  while ( choice != 4 );

  

     return 0;



}