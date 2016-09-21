#include <iostream>
using namespace std;

int main()
{
    long num = 0;
    long sum = 0;
    int count = 0;
    long i;
    do
    {
        num++;
        sum = 0;
        for (i =0;i <= num;i++)
           sum += i;
        for (i = 0;i <= sum/2;i++) {
            if (i * i == sum) {
                count ++;
                cout << "The sum is : " << sum << ", the num is :" << num << endl; 
                break;
            }
        }
    }

        
    while(count < 3);
    return 0;
}
