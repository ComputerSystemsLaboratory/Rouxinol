#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;

ull mult_mod(ull a, ull b, ull M)
{
	ull q = (long double) a * (long double) b / (long double) M;
	ull r = a * b - q * M;
	return (r + 5 * M) % M;
}

ull pow_mod(ull a, ull n, ull m)
{
	ull ans = 1;
	while(n > 0)
	{
		if(n & 1)
			ans = mult_mod(ans, a, m);
		a = mult_mod(a, a, m);
		n >>= 1;
	}
	return ans;
}

bool witness(ull a, ull s, ull d, ull n)
{
	ull x = pow_mod(a, d, n);
	if (x == 1 || x == n - 1) return 0; 
	for(int i = 0; i < s - 1; i++)
	{
		x = mult_mod(x, x, n);
		if (x == 1) return 1; 
		if (x == n - 1) return 0; 
	}
	return 1;
}

bool miller_rabin(ull n) //return true if prime
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;
	ull d = n - 1, s = 0;
	while (d % 2 == 0) ++s, d /= 2;
	vector<ull> test = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 0};
	for (int i = 0; test[i] && test[i] < n; ++i)
		if (witness(test[i], s, d, n))
			return 0; 
	return 1;
}

ull pollard_rho(ull n) //n shouldn't be prime
{
	if(!(n & 1))
		return 2;

	if(miller_rabin(n))
		return n;

	while(1)
	{
		ull x = (ull)rand() % n, y = x;
		ull c = rand() % n;
		if(c == 0 || c == 2)
			c = 1;
		for(int i = 1, k = 2; ; i++)
		{
			x = mult_mod(x, x, n);
			if(x >= c)
				x -= c;
			else
				x += n - c;
			if(x == n)
				x = 0;
			if(x == 0)
				x = n - 1;
			else
				x--;
			ull d = __gcd(x > y ? x - y : y - x, n);
			if(d == n)
				break;
			if(d != 1)
				return d;
			if(i == k)
			{
				y = x;
				k <<= 1;
			}
		}
	}
	return 0;
}

map<ull, int> fact;

void factorize(ull n)
{
	if(n > 1)
	{
		ull x;
		while(!(x = pollard_rho(n)));

		if(x == n)
		{
			fact[n]++;
			return;
		}

		factorize(x);
		factorize(n / x);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ull n;
	cin >> n;
	factorize(n);
	cout << n << ":";
	for(auto cur : fact)
	{
		// cout << cur.first << "^" << cur.second << " ";
		for(int i = 0; i < cur.second; i++)
			cout << " " << cur.first;
	}
	cout << endl;
	
	
	return 0;
}