/** Luke Deegan,
 *  Exercise 5,
 *  Method of Least Squares of Linear Regression,
 *  23/9/17
 */

/** Preprocessor directives */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /** Variable declaratons */

        int n = 0, i = 0;
        double array_X[100] = {0}, array_Y[100] = {0}, sum_x = 0, sum_y = 0, product_xy = 0, sumx2 = 0;
        double avg_x, avg_y, slope, intersection;


    /** Explain purpose of program to the user */

        cout << "\n" << "Program to calculate the Trend Line" << "\n" << "of a series of points, using the method"
             << "\n" << "of least squares of linear regression" << "\n" << endl;


    /** While loop to allow user to enter number of points to be used */

        while ((n < 1)||(n > 99))
        {
            cout << "\n" << "Enter the number of points (n): " << "\n" << endl;
            cin >> n;
        }


    /** For loop to allow user to enter x and y values */

        for (i = 0; i < n; i++)
        {
            cout << "Enter x " << i << ": ";
            cin >> array_X[i];

            cout << "Enter y " << i << ": ";
            cin >> array_Y[i];
        }

    /** Calculate the sum of x points using for loop */

        for (i = 0; i < n; i++)
        {
            sum_x = sum_x+array_X[i];
        }


    /** Calculate the sum of y points using for loop */

        for (i = 0; i < n; i++)
        {
            sum_y = sum_y+array_Y[i];
        }


    /** Display the total sum of x and y values */

        cout << "\n" << "Total of x values: " << sum_x << endl;
        cout << "\n" << "Toatal of y values: " << sum_y << endl;


    /** Calculate the sum of the product as well as the sum of the x^2 values */

        for (i = 0; i < n; i++)
        {
            product_xy = product_xy + (array_X[i] * array_Y[i]);
            sumx2 = sumx2+ pow(array_X[i],2);

        }


    /** Average x and y values */

        avg_x = sum_x/n;
        avg_y = sum_y/n;


    /** Display the previously calculated values */

        cout << "\n" << "Sum of the products: " << product_xy << endl;
        cout << "\n" << "Sum of the x^2 values: " << sumx2 << endl;
        cout << "\n" << "Avg. x value: " << avg_x << endl;
        cout << "\n" << "Avg. y value: " << avg_y << endl;


    /** Calculate and display slope (m) */

        slope = ((n*product_xy)-(sum_x*sum_y))/((n*sumx2)-(pow(sum_x,2)));

        cout << "\n" << "Slope m: " << slope << endl;


    /** Calculate and display point of intersection (c) */

        intersection = avg_y-(slope*avg_x);

        cout << "\n" << "Intersect c: " << intersection << endl;


    return 0;
}
