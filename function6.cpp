#include <iostream>

using namespace std;

 bool canvote(int age1)
{
    return age1 >= 18;
}
 
int main()
{
    int age1;
    cout << "citizen 1" << endl;
    cin >> age1;
    bool result = canvote (age1);
    cout << "eligible to vote:" << result << endl;

    return 0;

}