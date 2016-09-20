#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 0; i <= 100; i++)
        for (j = 0; j <= 100 -i; j++) {
            k = 100 - i -j;
            if (10 *i + 3 * j + 0.5 * k == 100)
                cout << "Here is a solution:" << "horses:" << i <<",pigs:" << j << ", rabbits:" << k << endl;
        }
    return 0;
}

