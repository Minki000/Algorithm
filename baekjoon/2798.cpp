#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int m, n, arr[100];
	
	cin >> n >> m;

	int ans = -1;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x = m;

	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int temp = arr[i] + arr[k] + arr[j];
				int dis = m - temp;
				if (dis < x && dis >= 0) {
					x = dis;
					ans = temp;
				}
			}
		}
	}
	cout << ans;


}
