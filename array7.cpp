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
    int count = 0;
    int notcount = 0;
    for (int i = 0; i < 10; i++)
    {
     if (numbers[i] >= 50)
     {
        count++;
     }
     else
        {
            notcount++;
        }
    }
    cout << "the number of numbers greater than or equal to 50 is: " << count << endl;
    cout << "the number of numbers less than 50 is: " << notcount << endl;

    return 0;
}
