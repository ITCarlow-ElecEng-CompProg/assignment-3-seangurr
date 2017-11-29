/** Sean Gurr
 *  C00221886
 *  Ex. 3
 *  Standard Deviation Calculator
 *  20/09/2017
 */

/**< preprocessor directives */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**< main() function */
int main()
{
    /**< variable declarations*/
    int i;
    double num [10]={0},mean,sum,standardDeviation;
    /**< Set pecision of digits displayed*/
    cout << fixed;
    cout << setprecision(2);

    /**< Purpose of code */
    cout << "Standard Deviation Calculator" << endl;
    /**<  Initialise sum to zero*/
    sum = 0;
    /**< For loop criteria*/
    for (i=0;i<10;i++)
    {
       cout<< "Enter value " << i << ": " ;
       cin>> num[i];
       /**< Perform calculation */
       sum = sum + num [i];
    }
    mean = sum / 10;
    /**<  Initialise sum to zero*/
    sum = 0;
    /**< For loop criteria*/
    for (i=0;i<10;i++)
    {
        /**< Perform calculation */
        sum = sum + pow((num[i]-mean),2);
    }

    /**< Perform calculation */
    standardDeviation = pow((sum/9),0.5);
    /**< Display mean and standard deviation results*/
    cout << "\nMean of values is: " << mean << endl;
    cout << "\nStandard Deviation is: " << standardDeviation << endl;

    return 0;
}
