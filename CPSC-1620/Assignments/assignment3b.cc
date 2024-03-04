#include <iostream>

using namespace std;

int main() 
{
    double payRate = 0, hoursWorkedWeekly = 0, grossPay = 0, netPay = 0, clothesCost = 0, suppliesCost = 0, currentAmount = 0, bondsCost = 0;

    //Prompting the user for their Pay rate and hours worked weekly during the summer job.
    cout << "What was the pay rate of the summer job? ";
    cin >> payRate;
    cout << "How many hours worked per week of the summer job? ";
    cin >> hoursWorkedWeekly;

    //Calculating all other variables as needed.
    grossPay = payRate * hoursWorkedWeekly * 5; //In this case, 5 represents the 5 week period of the summer job as stated in the question.
    netPay = grossPay * 0.86;//Taking 14% tax off of the gross pay.
    clothesCost = netPay * 0.1;//10% of net pay for clothes.
    suppliesCost = netPay * 0.01;//1% of net pay for school supplies.
    currentAmount = netPay - clothesCost - suppliesCost;//Finds out how much money is leftover after clothes and school supplies.
    bondsCost = currentAmount * 0.25;//Cost of using 25% of the leftover amount to buy bonds.

    //Prints out the required values from a. to e.
    cout << "Gross income before taxes is: $" << grossPay << " and income after taxes is: $" << netPay << "." << endl;
    cout << "Money spent in clothes and accessories is: $" << clothesCost << "." << endl;
    cout << "Money spent in school supplies is: $" << suppliesCost << "." << endl;
    cout << "Money spent on saving bonds is: $" << bondsCost << "." << endl;
    cout << "Money the parents spent on saving bonds is: $" << bondsCost / 2 << "." << endl;
    
    cout<<"assignment3b";
	return 0;
}
