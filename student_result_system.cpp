#include <iostream>

using namespace std;

int main()
{
   int students [10];

   for (int i = 0; i < 10; i++)
   {
    cout << "enter a student score:" << endl;
    cin >> students[i];
   }
    cout << "\nthe student scores you entered are:\n" << endl;
    for (int i = 0; i < 10; i++)
    {
     cout << students[i] << endl;
    }
    int sumtotal = 0;
    float average = 0;
    int passes = 0;
    int fails = 0;
    int highest = students[0];
    int lowest = students[0];
    for (int i = 0; i < 10; i++)
    {
     sumtotal += students[i];
     average = sumtotal / 10.0;
     if (students[i] >= 50)
     {
        passes++;
     }
     else
        {
            fails++;
        }
     if (students[i] > highest)
     {
        highest = students[i];
     }
     if (students[i] < lowest)
     {
        lowest = students[i];
     }
    }
    cout << "the total score of the students is: " << sumtotal << endl;
    cout << "the average score of the students is: " << average << endl;
    cout << "the number of students who passed is: " << passes << endl;
    cout << "the number of students who failed is: " << fails << endl;
    cout << "the highest score is: " << highest << endl;
    cout << "the lowest score is: " << lowest << endl;
    return 0;
}
