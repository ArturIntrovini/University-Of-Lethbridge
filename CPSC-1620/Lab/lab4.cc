#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main() 
{
    ifstream in;
    ofstream out;
    float numerator = 0, denominator = 0, result = 0;
    
    in.open("input.txt");
    in >> numerator >> denominator;
    in.close();

    assert (denominator != 0);
    result = numerator/denominator;

    out.open("output.txt");
    out << result << endl;

    cout << endl;

	return 0;
}