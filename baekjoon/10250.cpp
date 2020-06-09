#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int h, w, n;

int main() {
	int t;
	int a;
	int b;
	cin >> t;
	
	while (t--) {
		cin >> h >> w >> n;
		a = n % h;
		b = n / h + 1;

		if (a == 0) {
			a = h;
			b--;
		}
		if (b < 10) {
			cout << a << "0" << b << endl;
		}
		else {
			cout << a << b << endl;
		}
	}
}



	
