#include <iostream>
using namespace std;
int n;
int a;
int p = 0;

void is_prime()
{
	for(int i = 2; i*i <= a; i++)
	{
		if (a % i == 0)
		{
			return;
		}
	}
	
	p++;
}

int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		is_prime();
	}
	
	cout << p << endl;
	return 0;
}