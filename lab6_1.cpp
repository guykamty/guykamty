#include <iostream>
using namespace std;

int main() {
    int i = 1, j, a = 0, b = 0;

    while (i == 1) {
        cout << "Enter an integer: ";
        cin >> j;

        if (j == 0) {
            break;
        } else if (j % 2 == 1) {
            b++;
        } else { 
            a++;
        }
    }

    cout << "#Even numbers = " << a << endl;
    cout << "#Odd numbers = " << b << endl;

    return 0;
}