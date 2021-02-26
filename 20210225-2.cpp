#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int total(int a) {
    int aTotal = 1;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            aTotal += i;
            if (a / i != i) {
                aTotal += a / i;
            }
        }
    }
    return aTotal;
}

int main() {
    vector<int> list;
    for (int n = 2; n <= 1000000; n++) {
        int nTotal = total(n);
        if (n == total(nTotal) && n != nTotal) {
            int checked = 0;
            for (int i = 0; i < list.size(); i++) {
                if (nTotal == list[i]) {
                    checked = 1;
                }
            }
            if (checked == 0) {
                list.push_back(n);
                cout << n << " " << nTotal << endl;
            }
        }
    }
}
