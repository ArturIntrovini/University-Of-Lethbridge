#include <iostream>
#include <fstream>
#include <iomanip>
#include <assert.h>

using namespace std;

const double dailyMax = 500, serviceCharge = 0.04, serviceFee = 25;

int main(){

    ifstream inFile;
    ofstream outFile;

    double desiredAmount = 0, accountBalance = 0;
    char choice;

    //Gets current account balance from text file, prints it to user, ends the operation if balance is zero or negative.
    inFile.open("balance.txt");
    inFile >> accountBalance;
    cout << "Current account balance: $" << fixed << setprecision(2) << accountBalance << endl;
    if (accountBalance <= 0) {
        cout << "Account Balance is negative or zero, no withdrawal permitted." << endl << endl;
        exit(1);
    }
    inFile.close();
    
    //Creates output file with soon to be updated balance and prompts use for how much they would like to withdraw.
    outFile.open("updatedBalance.txt");
    cout << "How much would you like to withdraw? ";
    cin >> desiredAmount;
    if (desiredAmount <= 0) {
        cout << "Invalid amount. Please try again." << endl << endl;
        exit(1);
    }

    //Checks if the desired amount is over daily limit, if it is, ends the operation.
    if (desiredAmount > dailyMax) {
        cout << "Maximum daily withdrawal is $500.00. Please try again." << endl << endl;
        exit(1);
    //Checks if user is ok with paying extra fees to withdraw amount that is larger than current balance. Prints values to the user.
    } else if (accountBalance < desiredAmount) {
        cout << "Account Balance is not enough. Withdrawal can still be completed for a service fee of $25.00" << endl <<"Do you want to continue with the withdrawal (Y - Yes | N - No)? ";
        cin >> choice;
        cout << endl;
        if (choice == 'y' || choice == 'Y') {
                //Checks if the amount is over 300, if so, calculates the service charge on the amount over 300 and prints charges and fees to the temrinal.
                if (desiredAmount > 300) {
                    accountBalance = accountBalance - ((desiredAmount - 300) * serviceCharge) - (desiredAmount + serviceFee);
                    cout << "Amount requested is over $300.00, 4% service charge applied on the amount over $300.00" << endl;
                    cout << "Service Charge on the amount over $300.00: $" << ((desiredAmount - 300) * serviceCharge) << endl;
                    cout << "Service Fee: $" << serviceFee << endl;
                }
                //If the amount is less than 300, just charge the service fee.
                else {
                    accountBalance = accountBalance - (desiredAmount + serviceFee);
                    cout << "Service Fee: $" << serviceFee << endl;
                }
        //Ends operation if user's choice was anything but a yes from above.
        } else {
            cout << "Ending operation." << endl << endl;
        }
    //Checks if the account balance is enough to withdraw the desired amount, even with the 4% service charge.
    } else if (desiredAmount > 300 && accountBalance > (300 +(desiredAmount - 300) * serviceCharge)) {
        accountBalance = accountBalance - ((desiredAmount - 300) * serviceCharge) - desiredAmount;
        cout << "Service Charge on the amount over $300.00: $" << ((desiredAmount - 300) * serviceCharge) << endl;
    //Final check if the amount is less than what triggers a service charge.
    } else if (desiredAmount <= 300) {
        accountBalance = accountBalance - desiredAmount;
    }

    //Outputs the final account balance to an output file and to the terminal.
    outFile << accountBalance;
    cout << "Final account balance: $" << accountBalance << endl << endl;
    outFile.close();

    return 0;

}