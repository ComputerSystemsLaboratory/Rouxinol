#include <cstdint>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	uint64_t f = 1;
	for (int i = 1; i <= n; ++i)
		f *= i;

	cout << f << endl;

	return 0;
}