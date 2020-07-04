#include <iostream>
#include <string>
using namespace std;


int main() {
	int n;
	int arr[1000];
	int k;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	

	for (int i = 0; i < n; i++) {
		for (int j =i +1 ; j < n; j++) {
			if (arr[i] > arr[j]) {
				k = arr[j];
				arr[j] = arr[i];
				arr[i] = k;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}
