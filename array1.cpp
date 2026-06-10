#include <iostream>

using namespace std;

int main()
{
   int numbers[5];
   {
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    cout << "the first number is:" << numbers[0] << endl;
    cout << "the second number is:" << numbers[1] << endl;
    cout << "the third number is:" << numbers[2] << endl;
    cout << "the fourth number is:" << numbers[3] << endl;
    cout << "the fifth number is:" << numbers[4] << endl;
   }

  return 0;
}