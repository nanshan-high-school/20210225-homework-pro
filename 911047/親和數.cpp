#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int index1,index2; 
    vector <int> numberA;
    vector <int> numberB;
    for (int i = 2; i < sqrt(a); i++) {
        index1 = b % i;
        index2 = b / i;
        if (index1 == 0) {
            numberB.push_back(i);
            numberB.push_back(index2);
        }
    }

    for (int i = 2; i < sqrt(b); i++) {
        index1 = a % i;
        index2 = a / i;
        if (index1 == 0) {
            numberA.push_back(i);
            numberA.push_back(index2);
        }
    }

    int totalA = 0;
    int totalB = 0;

    for (int i = 0; i < numberA.size(); i++) {
        totalA += numberA[i];
    }
    totalA += 1;

    for (int j = 0; j < numberB.size(); j++) {
        totalB += numberB[j];
    }
    totalB += 1;
    
    if (totalA == b && totalB == a) {
        cout << "true";
    } else {
        cout << "false";
    }
}