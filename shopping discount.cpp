
#include <iostream>
using namespace std;

int main() {
    float bill, discount, amount;

    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill >= 1000) {
        discount = bill * 0.10;
        amount = bill - discount;
    } else {
        amount = bill;
    }

    cout << "Amount to pay: " << amount;

    return 0;
}
