#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, mun;
    cin >> num;
    cin >> mun;

    int temp = 1;
    int temp1 = 1;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            temp += i;
            if (i != num / i) {
                temp += (num / i);
            }
        }
    }
    for (int i = 2; i <= sqrt(mun); i++) {
        if (mun % i == 0) {
            temp1 += i;
            if (i != mun / i) {
                temp1 += (mun / i);
            }
        }
    }
    if ((temp == mun && temp1 == num) && num != mun) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
} 
