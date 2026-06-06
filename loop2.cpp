#include <iostream>

using namespace std;

int main()
{
   string name;
   int number;
   cout << "enter your name in capital letter" << endl;
   cin >> name;
   cout << "How many time should i print your name" << endl;
   cin >> number;

    for ( int i = 1; i <= number; i++)
    cout << name << endl;

    return 0;

}