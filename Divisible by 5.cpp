#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not divisible by 5";
    }

    return 0;
}

