#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int  x;
	int a;
	int b;
	int maxN = 0, minN;
	cin >> x;
	
	for (int i = 1; i < 987654321; i++) {
		
		minN = maxN + 1;
		maxN = minN + i-1;

		

		if (minN <= x && maxN >= x) {
			if (i % 2 == 0) {
				a = i - (x - minN);
				b = 1 + (x - minN);
				cout << b << "" << "/" << a;
				return 0;
			}
			else {
				a = 1 + (x - minN);
				b = i - (x - minN);
				cout << b << "" << "/" << a;
				return 0;
			}
		}
				
	}
}



	
