#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int a[10];
	int b = 0;
	int c, d;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		b = b + a[i];
	}
	
	bool check = false;
	for (int j = 0; j < 9; j++) {
		for (int k = j + 1; k < 9; k++) {
			if (b - a[k] - a[j] == 100) {
				c = a[k];
				d = a[j];
				check = true;
				break;
				
			}
		}
		if (check == true) {
			break;
		}
	}
	sort(a, a + 9);
	for (int l = 0; l < 9; l++) {
		if (a[l] != c && a[l] != d) {
			cout << a[l] << endl;

		}
	}


	
	
}
