
#include <iostream>
using namespace std;

int main() {
    int speed;

    cout << "Enter car speed: ";
    cin >> speed;

    if (speed > 60) {
        cout << "Over the speed limit";
    } else {
        cout << "Safe speed";
    }

    return 0;
}
