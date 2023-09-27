#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> factorize;
	cout << n << ": ";
	int input = n;
	for (int i = 2; i <= sqrt((double)input); ++i)
	{
		while (n % i == 0)
		{
			n /= i;
			factorize.push_back(i);
		}
	}
	if (n != 1)
	{
		factorize.push_back(n);
	}
	for (int i = 0; i < factorize.size() - 1; ++i)
	{
		cout << factorize[i] << " ";
	}
	cout << factorize[factorize.size() - 1] << endl;
}

int main()
{
	solve();
	return(0);
}