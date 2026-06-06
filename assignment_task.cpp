#include <iostream>

using namespace std;

int main()
{
    int score = 50;
    
    cout << "intial score:" << score << endl;
    score += 10;

    cout << "after addition:" << score << endl;
    score -= 10;
    cout << "after subraction:" << score << endl;
    score *= 20;
    cout << "after multiplication:" << score << endl;
    score /= 5;
    cout << "after division:" << score << endl;


    return 0;
}