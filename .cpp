#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b , ant = 1, bnt = 1;
	cin >> a >> b;

	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) ant += i, ant+= a / i;
	}

	for (int i = 2; i <= sqrt(b); i++) {
		if (b % i == 0) bnt += i, bnt+= b / i;
	}

	if (a == bnt && b == ant) cout << "Affinity Number"; else cout << "false";
}
