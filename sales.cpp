#include <iostream>
using namespace std;


int main() 
{
    int weeklySales, sales1, sales2, sales3;
    cout << "Enter the WeeklySales:" << endl;
    if (!(cin >> weeklySales)) {
        cout << "Please enter the Integer!" << endl;
        return 0;
    }
    cout << "The WeeklySales is : " << weeklySales << endl;

    sales1 = 600;
    cout << "The choice of Method 1 is: " << "$" << sales1 << endl;

    sales2 = 7 * 5 * 8;
    sales2 += weeklySales * 0.1;
    cout << "The choice of Method 2 is: " << "$" << sales2 << endl;

    sales3 = weeklySales * 0.2 + weeklySales/225*0.2;
    cout << "The choice of Method 3 is: " << "$" << sales3 << endl;

    return 0;
}
    
