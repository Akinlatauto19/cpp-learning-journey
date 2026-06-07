#include <iostream>
using namespace std;

int main()
{
  int choice, accountnumber, accountname, amount;
   int pin = 1245;
  int enterpin;
   
  
 do
{
  cout << "1. bank purchase" << endl;
  cout << "2. bank transfer"  << endl;
  cout << "3. airtime" << endl;
  cout << "4. exit"<< endl;
  cin >> choice;

  if ( choice == 1)
  {
    cout << "amount" << endl;
    cin >> amount;
  cout << " enter your password:" << endl;
  cin >> enterpin;
  while( enterpin != pin )
 {
     cout << " wrong pin try again" << endl;
     cout << " enter your password:" << endl;
      cin >>