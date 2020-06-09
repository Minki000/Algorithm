#include <iostream>
#include <vector>
using namespace std;



int main() {
	vector<int> v;
	vector<int> a;


	int ans = 0;

	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		a.push_back(v[i] % 42);
	}


	
	for (int i = 0; i < 10; i++) {
		bool q = false;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				q = true;
				break;
			}
		}
		if (q == false) {
			ans++;
		}

	}


	cout << ans;
}
