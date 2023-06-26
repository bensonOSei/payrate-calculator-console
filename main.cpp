#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int empId[10] = {1234567, 2345678, 3456789, 5653845, 4520125, 7895122, 8777541, 8451277, 1392850, 7580489}, hours[10];
    double payRate[10], wages[10];

    cout << "ABC COMPANY \n";

    for (int a = 0; a < 10; a++)
    {
    start:
        // Get data from user
        cout << "FOR " << empId[a] << endl;
        cout << "ENTER HOURS: ";
        cin >> hours[a];
        cout << "ENTER PAY RATE: ";
        cin >> payRate[a];
        cout << endl;

        if ((hours[a] < 0) || (payRate[a] < 15.00))
        {
            cout << "INVALID HOURS/PAY RATE. \nHOURS SHOULD NOT BE NEGATIVE AND PAY RATE NOT LESS THAN 15.00 \nPLEASE TRY AGAIN \n";

            goto start;
            
        }

        wages[a] = hours[a] * payRate[a];
    }

    cout << setw(5) << "EMPLOYEE ID" << setw(5) << " GROSS WAGES" << endl;

    for (int x = 0; x < 10; x++)
    {
        cout << setw(5) << empId[x] << setw(5) << wages[x] << endl;
    }

    return 0;
}
