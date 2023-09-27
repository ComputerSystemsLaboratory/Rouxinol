#include <vector>
#include <iostream>

using namespace std;

bool isprime(int val)
{
	if (val < 2) return false;
	if (val == 2) return true;
	if (val % 2 == 0) return false;
	for (int i = 3; i*i <= val; i+=2)
	{
		if (val % i == 0) return false;
	}
	return true;
}

int main()
{
	int vals = 0;

	cin >> vals;
	int count = 0;
	while (cin >> vals) count += isprime(vals);
	cout << count << endl;
	return 0;
}