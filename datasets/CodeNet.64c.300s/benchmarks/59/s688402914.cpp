#include<iostream>

using namespace std;

int prime(int n)
{
	int i;
	if (n == 2)return 1;
	for (i = 2; i*i <= n; i++)
	{
		if (n%i == 0)return 0;
	}
	return 1;
}

int main()
{
	int n, i, a, count = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		count += prime(a);
	}
	cout << count << endl;
    return 0;
}