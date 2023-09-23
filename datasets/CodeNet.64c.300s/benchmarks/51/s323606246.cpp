#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char const* argv[])
{
	unsigned long long n;
	int i;

	cin >> n;

	for( i = n,n = 1;i >= 1;i-- ) n *= i;

	cout << n << endl;

	return 0;
}