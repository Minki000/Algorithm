#include <iostream>
#include <string>
using namespace std;

bool check[100000];

int d(int x) {
	string s = to_string(x);

	for (int i = 0; i < s.size(); i++) {
		x += (s[i] - '0');
	}

	return x;
}

int main() {
	int a;

	for (int i = 1; i <= 10000; i++) {
		int temp = d(i);
		check[ temp ] = true;
	}
	
	for (int i = 1; i <= 10000; i++) {
		if (check[i] == false) {
			cout << i << endl;
		}
	}

	return 0;
}

