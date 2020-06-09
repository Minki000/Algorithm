#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int x=-1;

	if (n == 1)
	{
		cout << 1;
		return 0;
	}

	long long minN;
	long long maxN=1;
	for (int i = 2; i < 987654321; i++) {
		
		minN = maxN+1;
		maxN = 6 * (i-1) + minN - 1;

		if (minN <= n  && n <= maxN) {
			x = i;
			break;
		}
	}
	cout << x;
}



	
