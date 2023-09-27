#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class cDigitNumber
{
public:
	int count(int, int);
};

int cDigitNumber::count(int a, int b)
{
	long long t = a + b;
	int count = 0;
	while (t >= 10)
	{
		++count;
		t /= 10;
	}
	return ++count;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	cDigitNumber cdn;
	int a, b;

	while (1)
	{
		cin >> a >> b;
		if (cin.fail()) break;
		cout << cdn.count(a, b) << endl;
	}

	return 0;
}