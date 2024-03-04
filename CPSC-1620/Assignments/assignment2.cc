#include <iostream>
#include <string>

using namespace std;

int main() 
{
    //Declaration of all variables required.
    const int SECRET = 11;
    const double RATE = 12.50;

    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    //Prompts the user for the input of two integers, then print those to the terminal.
    cout << "Enter two integers: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "The value of num1 = " << num1 << ", and the value of num2 = " << num2 << "." << endl;
    cout << endl;

    //Multiplies num1 by 2, then adds num2, then assigns the value to newNum and, finally, prints it to the terminal.
    newNum = (num1 * 2) + num2;
    cout << "The initial value of newNum is: " << newNum << "." << endl;
    cout << endl;

    //Updates the value of newNum by adding the value of SECRET.
    newNum = newNum + SECRET;
    cout << "The updated value of newNum is: " << newNum << "." << endl;
    cout << endl;

    //Prompts the user for a person's lastname, then assign it to name.
    cout << "Enter a person's lastname: ";
    cin >> name;
    cout << endl;

    //Prompts the user for a decimal number between 0 and 70 and store it in hoursWorked, then multiplies it by RATE and stores the result in wages.
    cout << "Enter a decimal number between 0 and 70: ";
    cin >> hoursWorked;
    wages = hoursWorked * RATE;
    cout << endl;

    //Outputs information provided by the user in an organized manner.
    cout << "Name: " << name << endl;
    cout << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << endl;
    cout << "Salary : $" << wages << endl;
    cout << endl;

	return 0;
}
