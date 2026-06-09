#include <iostream>

using namespace std;

int multiplynumber (int num1, int num2 )
{
    return num1 * num2;

}

int main()
{
    int num1, num2;
    cout << "number 1" << endl;
    cin >> num1;
    cout << "number 2" << endl;
    cin >> num2;
    int result = multiplynumber(num1, num2);
    cout << "answer:" << result << endl;

    return 0;
}