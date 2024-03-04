#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    double studyHours;

    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    

    cout << "Enter how many hours: ";
    cin >> studyHours;
    cout << endl;

    cout << "Hello, " << name << "! On Saturday, you need to study " << studyHours << " hours for the exam." << endl;
    cout << endl;

    return 0;
}