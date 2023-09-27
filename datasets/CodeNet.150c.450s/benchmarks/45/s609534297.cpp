#include <iostream>

using namespace std;

#define MOD 1000000007LL

long long power(int a, int b)
{
	if(b == 0) { return 1LL; }
	
	if(b % 2 == 1) { return power(a, b / 2) * power(a, b / 2) % MOD * a % MOD; }
	
	return power(a, b / 2) * power(a, b / 2) % MOD;
}

int main()
{
	int n, m;
	
	cin >> m >> n;
	
	cout << power(m, n) << endl;
	
	return 0;
}