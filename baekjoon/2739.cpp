#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << a << " * " << i << " = " << a*i << std::endl;
	}
}
