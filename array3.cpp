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
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
     sum += numbers[i];
    }
     cout << "sum total: " << sum << endl;
     float average;
     average = sum / 5.0;
     cout << "average: " << average << endl;
     return 0;
} 