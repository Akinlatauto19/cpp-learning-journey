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
    int search;
    cout << "enter a number to search for:" << endl;
    cin >> search;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
     if (numbers[i] == search)
     {
        found = true;
        break;
     }
    }
    if (found)
    {
     cout << "the number was found." << endl;
    }
    else
    {
     cout << "the number was not found." << endl;
    }
        return 0;
}