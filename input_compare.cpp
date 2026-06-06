#include <iostream>

using namespace std;

int main()
{
    int a, b;
     
    cout << "enter first value:" << endl;
    cin >> a;
    cout << "enter second value:" << endl;
    cin >> b;
    cout << "answer:" << (a == b) << endl;
    cout << "answer:" << (a != b) << endl;
    cout << "answer:" << (a >= b) << endl; 
    cout << "answer:" << (a <= b) << endl;
    cout << "answer:" << (a < b)  << endl;
    cout << "answer:" << (a > b)  << endl;
    return 0;
}