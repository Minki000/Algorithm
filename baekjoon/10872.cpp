#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fun(int x) {
	if (x == 1 || x == 0){
		return 1;
	}
	int result = x * fun(x - 1);
	return result;
}

int main(){
	int n;
	cin >> n;

	cout << fun(n);
}
