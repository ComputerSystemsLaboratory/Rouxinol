#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

unsigned long factorial(unsigned long n)
{
	unsigned long result = 1;
	for (unsigned long i = n; i > 0; --i) {
		result *= i;
	}
	return result;
}

int main()
{
	unsigned long value = 0;
	cin >> value;
	cout << factorial(value) << endl;

	return 0;
}