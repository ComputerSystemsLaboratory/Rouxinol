#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll factorial(int n)
{
	if(n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(void)
{
	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}