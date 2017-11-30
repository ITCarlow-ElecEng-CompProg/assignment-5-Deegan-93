/** Luke Deegan,
 *  Exercise 4,
 *  Electrical Resistance of a Wire,
 *  23/9/17
 */

/** Preprocessor directives */
#include <iostream>
#define PI 3.14
using namespace std;


/** Sub function declaration */
double res(double, double, double);

/**Program for calculating the resistance of a wire */
int main()
{
    cout << "\n" << "Program to calculate the resistance of a wire" << "\n" << endl;

    /** Variable Declaration */
    double radius, length, resistivity, resistance;

    /** Declare variable value */
    radius = 0;

    /** Use while loop to check if value is greater than 0 */
    while (radius <= 0)
    {
        cout << "\n" << "Enter a value for radius in M: " << "\n" << endl;
        cin >> radius;
    }

    /** Declare variable value */
    length = 0;

    /** Use while loop to check if value is greater than 0 */
    while (length <= 0)
    {
        cout << "\n" << "Enter a value for length in M: " << "\n" << endl;
        cin >> length;
    }

    /** Declare variable value */
    resistivity = 0;

    /** Use while loop to check if value is greater than 0 */
    while (resistivity <= 0)
    {
        cout << "\n" << "Enter a value for resistivity in M: " << "\n" << endl;
        cin >> resistivity;
    }

    /** Declare variable equal to sub function */
    resistance = res(radius, length, resistivity);

    /** Print the result of the equation */
    cout << "\n" << "Resistance is: " << resistance << " Ohms" << endl;

    return 0;
}

/** user defined function */
double res(double radius, double length, double resistivity)
{
    /** Variable declaration */
    double result, area;

    /** Formuala for area */
    area = PI*radius*radius;

    /** Formuala for resistance */
    result = resistivity*(length/area);

    /** Return result */
    return result;

}
