#include <iostream>
#include <fstream>
#include <iomanip>
#include <assert.h>

using namespace std;

int main() 
{
    float num1 = 0, num2 = 0, result = 0;
    int operation = 0;

    //Starts intput/output variables and read the input file to assign the 2 values there to variables. Closes file after.
    ifstream in;
        in.open("input.txt");
        in >> num1 >> num2;
        in.close();
    ofstream out;
        
    //Prompts the user for which operation they want to perform with the variables. Stores choice in 'operation'.
    cout << "Which operation do you want to perform with " << num1 << " and " << num2 << "?" << endl;
    cout << "1- Addition" << endl << "2- Subtraction" << endl << "3- Multiplication" << endl << "4- Division" << endl;
    cin >> operation;

    //Performs the user's desired operation based on their selection above, storing the result in 'result'.
    //Outputs the result on file output.txt with fixed two decimal places.
    //Asserts that the denominator is not 0 in the division case.
    switch(operation) {
        case 1:
            result = num1 + num2;
            out.open("output.txt");
            out << fixed << setprecision(2) << num1 << " + " << num2 << " = " << result;
            break;
        case 2:
            result = num1 - num2;
            out.open("output.txt");
            out << fixed << setprecision(2) << num1 << " - " << num2 << " = " << result;
            break;
        case 3:
            result = num1 * num2;
            out.open("output.txt");
            out << fixed << setprecision(2) << num1 << " * " << num2 << " = " << result;
            break;
        case 4:
            assert(num2 != 0);
            result = num1 / num2;
            out.open("output.txt");
            out << fixed << setprecision(2) << num1 << " / " << num2 << " = " << result;
            break;
        default:
            cout << "Incorrect operation selected, exiting program." << endl;
            exit(0);
    }
    //closes output file.
    out.close();

    //Informs the user that the output file has been created successfully.
    cout << "output.txt file created successfully with the desired operation results." << endl;

    cout<<"assignment4"<<endl;
	return 0;
}