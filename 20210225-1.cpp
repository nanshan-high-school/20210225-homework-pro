#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int aTotal = 1;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            aTotal += i;
            if (i != a / i) {
                aTotal += (a / i);
            }
        }
    }

    int bTotal = 1;
    for (int i = 2; i <= sqrt(b); i++) {
        if (b % i == 0) {
            bTotal += i;
            if (i != b / i) {
                bTotal += (b / i);
            }
        }
    }

    if ((aTotal == b && bTotal == a) && a != b) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
}     
