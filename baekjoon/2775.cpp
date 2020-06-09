#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int h, w, n;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int k, n;
		cin >> k >> n;
		int arr[15][15];
		for (int i = 1; i < 15; i++) {
			arr[0][i] = i;
			arr[i][1] = 1;
		}
		for (int i = 1; i < 15; i++) {
			for (int j = 2; j < 15; j++) {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
		cout << arr[k][n] << endl;
	}
	
}



	
