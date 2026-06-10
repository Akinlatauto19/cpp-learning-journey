#include <iostream>

using namespace std;

int main()
{
   int numbers [5];

   for (int i = 0; i < 5; i++)
   {
    cout << "enter a number:" << endl;
    cin >> numbers[i];
   }
    cout << "\nthe numbers you entered are:\n" << endl;
    for (int i = 0; i < 5; i++)
    {
     cout << numbers[i] << endl;
    }
    int largest = numbers[0];
    for (int i = 1; i < 5; i++)
    {
     if (numbers[i] > largest)
     {
      largest = numbers[i];
     }
    }
    cout << "\nthe largest number is:" << largest << endl;
  return 0;
}