#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;

	int num1 = 0;
	for (int i = 1; i <= sqrt(a); i++) {
		if (a % i == 0) {
			num1 += i;
			if (i != 1) {
				num1 += (a / i);
			}
		}
	}
	
	int num2 = 0;
	for (int i = 1; i <= sqrt(b); i++) {
		if (b % i == 0) {
			num2 += i;
			if (i != 1) {
				num2 += (b / i);
			}
		}
	}


	cout << num1 << " " << num2;
	if (num1 == b && num2 == a) {
		cout << "true";
	} else {
		cout << "false";
	}
}