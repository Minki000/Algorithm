#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count = 0;
		string a;
		cin >> a;
		


		for (int i = 0; i < a.size(); i++) {
			if (a[i] == 'O') {
				int c = 1;
				for (int j = i-1; j >= 0; j--) {
					if (a[j] == 'O') {
						c++;
					}
					else {
						break;
					}
				}
				count += c;
			}
		}
		cout << count << endl;

	}

	return 0;
}
