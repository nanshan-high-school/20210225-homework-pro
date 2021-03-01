#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	vector<int> check;
	for (int i = 2; i < 100000; i++) {
		int temp = 0;
		for (int j = 1; j <= sqrt(i); j++) {
			if (i % j == 0) {
				temp += j;
				if (j != 1) {
					temp += (i / j);
				}
			}
		}

		int num = 0;
		for (int j = 1; j <= sqrt(temp); j++) {
			if (temp % j == 0) {
				num += j;
				if (j != 1) {
					num += (temp / j);
				}
			}
		}

		bool y = true;
		if (i == num && i != temp) {
			for (int j = 0; j < check.size(); j++) {
				if (i == check[j]) {
					y = false;
				}
			}
			if (y) {
				cout << i << "," << temp << "\n";
				check.push_back(temp);
			}
			
		}
	}
}