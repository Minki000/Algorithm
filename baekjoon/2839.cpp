#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	int x = n;
	for (int i = 0; i <= n/5; i++) {
		if ((n - 5 * i) % 3 == 0) {
			x = min(x, (n - 5 * i) / 3+i);
		}
	}
		if (x == n) {
			cout << -1;
			return 0;
		}
		cout << x;
}



	
