#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int input = 0, length = 0, sum = 0, i = 0;
    
    cout << "Input an integer to have its individual digits and the sum of all of them: ";
    cin >> input;
    input = abs(input);
    cout << endl;

    length = log10(input) + 1;

    for (i = 1; i <= length; i++) {
        cout << input/(int)pow(10,length-i) << " ";
        sum = sum + input/pow(10,length-i);
        input = input%(int)pow(10,length-i);
    }

    cout << endl << "Them sum of all digits is: " << sum << endl;;

}