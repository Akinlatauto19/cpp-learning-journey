#include <iostream>

using namespace std;

int main()
{
    int battery = 100;
    
    cout << "intial battery life:" << battery << endl;
    battery -= 20;

    cout << "new battery life after work:" << battery << endl;
    battery += 10;
    cout << "new battery life after charging:" << battery << endl;
    battery++;
    cout << "battery increment:" << battery << endl;
    battery--;
    cout << "battery decrement:" << battery << endl;
    battery--;
    cout << "second battery decrement:" << battery << endl;

    return 0;
}