#include <iostream>

using namespace std;

int main()
{
   int numbers [10];

   for (int i = 0; i < 10; i++)
   {
    cout << "enter a number:" << endl;
    cin >> numbers[i];
   }
    cout << "\nthe numbers you entered are:\n" << endl;
    for (int i = 0; i < 10; i++)
    {
     cout << numbers[i] << endl;
    }
    int evencount = 0;
    int oddcount = 0;   
    for (int i = 0; i < 10; i++)
    {
     if (numbers[i] % 2 == 0)
     {
        evencount++;
     }
     else
     {
        oddcount++;
     }
    }
    cout << "the number of even numbers is: " << evencount << endl;
    cout << "the number of odd numbers is: " << oddcount << endl;
    return 0;
}