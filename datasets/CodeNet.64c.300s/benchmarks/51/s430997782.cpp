#include <iostream>
using namespace std;

long fact(long);

int main()
{
	long n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}

long fact(long n)
{
	if (n > 0)
	{
		return n*fact(n-1);
	}
	else{
		return 1;
	}
}