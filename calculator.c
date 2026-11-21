
#include <stdio.h>
int main() {
    int units;
    float bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 20) {
        bill = units * 4;
    }
    else if (units <= 30) {
        bill = (20 * 4) + (units - 20) * 6;
    }
    else if (units <= 50) {
        bill = (20 * 4) + (10 * 6) + (units - 30) * 8;
    }
    else {
        bill = (20 * 4) + (10 * 6) + (20 * 8)
               + (units - 50) * 10;
    }

    cout << "\n------ Electricity Bill ------" << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Electricity Bill: Rs. " << bill << endl;

    return 0;
}
