#include <iostream>
using namespace std;

int main() {
    int counter, first, last, next;
    first = 1; last = 2;

    for (counter = first; counter <= last; counter++) {
        cout << "\n " << counter;
        next = counter * counter;
        cout << " " << next;
    }

    counter = first;
    while (counter <= last) {
        cout << "\n " << counter;
        next = counter * counter;
        cout << " " << next;
        counter++;
    }

    counter = first;
    do {
        cout << "\n " << counter;
        next = counter * counter;
        cout << " " << next;
        counter++;
    } while (counter < last);
}
