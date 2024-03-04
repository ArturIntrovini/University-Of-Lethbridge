#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double M1, M2, force, distance;
    const double KValue = 6.67 * pow(10, -8);

    cout << "What are the values of Mass 1 and Mass 2?" << endl;
    cin >> M1;
    cin >> M2;
    cout << endl;

    cout << "What is the distance between bot masses?";
    cin >> distance;
    cout << endl;

    force = KValue * ((M1 * M2)) / pow(distance, 2);

    cout << "The force between masses 1 and 2 is: " << fixed << setprecision(2) << force << endl;
    cout << endl;

    return 0;
}