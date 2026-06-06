#include <iostream>

using namespace std;

int main()
{
   string names;
    int age;
    float height;

    cout << "what is your name:" << endl;
    
    cin >> names;
    
    
    cout << "how old are you:" << endl; 
     
    cin >> age;
   
    cout << "how tall are you:" << endl;
    
    cin >> height;
    cout << "my name is:" << names << endl;
    cout << "my age is:" << age << endl;
    cout << "my height is:" << height << endl;    
     return 0;
}