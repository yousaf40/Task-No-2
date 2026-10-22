
#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature > 30) {
        cout << "Hot";
    } else {
        cout << "Cold";
    }

    return 0;
}
