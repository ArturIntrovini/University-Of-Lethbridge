#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char runOrNot;
    string str;
    int strLength = 0;

    //Prompts user if they want to run the algorith or not.
    cout << "Enter Y/y to convert a telephone number from letters to digits." << endl
         << "Enter any other letter to terminate the program. " << endl;
    cin >> runOrNot;
    cin.ignore();

    //If the user says yes to above, provides initial prompt for the number they want with letters and stores that in a string.
    if (runOrNot == 'Y' || runOrNot == 'y')
    {
        cout << "Enter a telephone number using letters: ";
        std::getline(std::cin, str);
        cout << endl;
        cout << "The corresponding telephone numbers is:" << endl;
    }
        
    //While loop of the operation that continues repeats if the user keeps asking for it.
    while (runOrNot == 'Y' || runOrNot == 'y')
    {
        //Checks the length of the string, if it is above 7, locks it to 7.
        strLength = str.length();
        if (strLength > 7)
        {
            strLength = 7;
        }

        //for loop to print each letter as a number based on the number pad of phones.
        int count = 0;
        for (char c : str)
        {
            if (std::isalpha(c) && c != ' ')
            {

                if (c < 97) //If conditional for Upper case letters.
                {
                    if (c == 83 || c == 86) //Specific cases for letters S and V.
                    {
                        cout << ((c - 65) / 3) + 1;
                    }
                    else if ((c - 65) / 3 > 6) //Specific cases for letters W, X, Y and Z.
                    {
                        cout << 9;
                    }
                    else //All other letters follow this.
                    {
                        cout << ((c - 65) / 3) + 2;
                    }
                }
                if (c > 96) //If conditional for Lower case letters.
                {
                    if (c == 115 || c == 118) //Specific cases for letters s and v.
                    {
                        cout << ((c - 97) / 3) + 1;
                    }
                    else if ((c - 97) / 3 > 6) //Specific cases for letters w, x, y and z.
                    {
                        cout << 9;
                    }
                    else //All other letters follow this.
                    {
                        cout << ((c - 97) / 3) + 2;
                    }
                }
                //Checks if the 3rd letter has been printed and prints the hyphen if the string length was longer than 3.
                if (count == 2 && strLength > 3)
                {
                    cout << "-";
                }
                //Increases the count variable to break out of the while loop after printing the 7th digit.
                count++;
                if (count == 7)
                {
                    break;
                }
            }
        }

        //Asks the user if they would like to run the algorithm again.
        cout << endl;
        cout << "To process another telephone number, enter Y/y." << endl << "Enter any other letter to terminate the program." << endl;
        cin >> runOrNot;
        cin.ignore();

        //Prompts for a new phone number as letters if the user chose to run the algorithm again.
        if (runOrNot == 'Y' || runOrNot == 'y')
        {
            cout << endl;
            cout << "Enter a telephone number using letters: ";
            std::getline(std::cin, str);
            cout << endl;
        }
    }
    cout << endl;
    cout << endl;
    cout << "assignment5";
    cout << endl;
    return 0;
}
