#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int fun(int a) {
	string s;
	s = to_string(a);
	int x = 0;

	for (int i = 0; i < s.size(); i++) {
		int temp = s[i] - '0';
		x += temp;
	}
	x = x + a;
	return x;
}

int main() {
	int n;
	cin >> n;
	string a;
	bool check = false;
	
	for (int i = 0; i < n; i++) {
		
		if (fun(i) == n) {
			cout << i;
			check = true;
			break;
		}
	}
	if (check == false) cout << 0;

}
