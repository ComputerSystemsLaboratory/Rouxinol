#include <iostream>

using namespace std;

long long fact(int n);

int main ()
{
	int n;

	cin >> n;

	cout << fact(n) << endl;

	return 0;
}

long long fact(int n)
{
	if(n == 1)    return 1;
	else if(n == 0)    return 0;

	return (n * fact(n - 1));
}