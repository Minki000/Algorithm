#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int p[1000];

	for (int i = 0; i < t; i++) {
		float q = 0;
		int c;
		float a = 0;
		cin >> c;
		for (int j = 0; j < c; j++) {
			cin >>  p[j];
			a += p[j];
		}
		a = a / c;
		for (int k = 0; k < c; k++) {
			if (p[k] > a) {
				q++;
			}
		}
		q = q / c * 100;
		cout << fixed;
		cout.precision(3);
		cout << q << "%" << endl;
		//cout << round(q * 1000)/1000 << "%" << endl;
	}

	return 0;
}
