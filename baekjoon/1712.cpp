#include <iostream>
#include <string>
using namespace std;


int main() {
	long a, b, c;
	long d = 0;

	cin >> a >> b >> c;
	if (b >= c) {
		d = -1;
		cout << d;
		return 0;
	}

	 d = a / (c - b) + 1;
	
	cout << d;
	
	

	return 0;
}

