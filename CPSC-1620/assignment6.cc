#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    double inputRadius = 0, height = 0, coneRadius = 0, area = 0, coneVolume = 0, bigCircleLength = 0, smallCircleLength = 0;

    //Prompts user for the radius of circular waxed paper.
    cout << "Enter the radius of the circular waxed paper in inches: ";
    cin >> inputRadius;

    //Calculates the height and the radius of the cone based on Calculus.
    height = inputRadius/sqrt(3);
    coneRadius = sqrt(2) / sqrt(3) * inputRadius;

    //Calculates the area of the base of the cone, and, with that, the volume of the cone.
    area = M_PI * pow(coneRadius, 2);
    coneVolume = (area * height) / 3;

    //Calculates the the circle length of the initial circle and the base circle.
    bigCircleLength = M_PI * 2 * inputRadius;
    smallCircleLength = M_PI * 2 * coneRadius;

    //Outputs the arc length of the removed sector by just subtracting the length of the base circle from the initial circle. Also outputs the volume.
    cout << "Length of the removed sector: " << fixed << setprecision(2) << bigCircleLength - smallCircleLength << " inches." << endl;
    cout << "Max Volume: " << fixed << setprecision(2) << coneVolume << " cubic inches." << endl << endl;

    cout<<"assignment6";
	return 0;
}