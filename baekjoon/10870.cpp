#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fun(int x) {
	if (x == 1) {
		return 1;
	}
	if (x == 0) {
		return 0;
	}
	return fun(x - 1) + fun(x - 2);
}

int main(){

	
	int n;
	cin >> n;
	cout << fun(n);
}
