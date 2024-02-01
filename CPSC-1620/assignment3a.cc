#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    double concreteVolume = 0, patioThickness = 0, ratioLength = 0, ratioWidth = 0, areaPatio = 0, ratio = 0, length = 0, width = 0;

    //Prompting the user for the volume of premixed concrete in cubic yards.
    cout << "What volume of premixed concrete (cubic yards) was ordered? ";
    cin >>  concreteVolume;
    cout << endl;

    //Prompting the user for the desired thickness of the patio in inches.
    cout << "What is the desired thickness (inches) of the patio? ";
    cin >> patioThickness;
    cout << endl;

    //Prompting the user for the desired ratio of length and width.
    cout << "What is the desired ratio of length (longest side) of the patio? ";
    cin >> ratioLength;
    cout << endl;
    cout << "What is the desired ratio of width (shortest side) of the patio? ";
    cin >> ratioWidth;
    cout << endl;

    //Calculating the area (square feet) of the patio by dividing the volume by the thickness.
    areaPatio = ( concreteVolume * 27 ) / ( patioThickness / 12 );

    //Calculating the length and width of the patio.
    ratio = ratioLength / ratioWidth;
    width = sqrt(areaPatio / ratio);
    length = areaPatio / width;

    //Prints out what is the length and width of the patio in feet.
    cout << "The length of the patio is: " << length << " feet, and the width is: " << width << " feet." << endl;

    cout<<"assignment3a";
	return 0;
}