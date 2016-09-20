#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int mSecret,mGuess;
    srand(time(NULL));
    mSecret = rand() % 101;
    cout << "The secret number(0~100) has produced!" << endl;
    cout << "Please input your guess number:" <<endl;
    int i = 0;
    do {
        if (!(cin >> mGuess)) {
            cout << "You entered a non-numeric. Exiting..." <<endl;
            break;
        }
        if (mGuess == mSecret) {
            cout << "Great! You are right!" << endl;
            break;
        } else if (mGuess > mSecret) {
            cout << "That's too high!" << endl;
        } else {
            cout << "That's too low!" << endl;
        }
        if (i == 10) {
            cout << mSecret << endl;
        }
        
    } while(++i);
    return 0;
}
