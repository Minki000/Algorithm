#include <iostream>
#include <string>
using namespace std;

bool check(int x) {
	string s = to_string(x);
	int a[1000];
	bool q = true;
	for(int i = 0; i < s.size(); i++) {
		a[i] = s[i] - '0';
	}

	if (s.size() < 2) return q;

	for (int i = 0; i < s.size()-2; i++) {

		if (a[i + 1] - a[i] != a[i + 2] - a[i + 1]) {
			q = false;
			break;
		}
		
	}
	return q;
	
}
int main() {
	int a;
	int b = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (check(i) == true) {
			b += 1;
		}

	}
	cout << b;

	return 0;
}

