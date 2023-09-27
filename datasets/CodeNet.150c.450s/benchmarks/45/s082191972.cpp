#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

template <class T>
T add(T a, T b)
{
	T r = a + b;
	
	if (r >= mod)
		r -= mod;
		
	return r;
}

template <class T>
T mul(T a, T b)
{
	T r = 0;
	
	while (b)
	{
		if (b & 1)
			r = add(r, a);
			
		b >>= 1;
		a <<= 1;
		
		if (a >= mod)
			a -= mod;
	}
	
	return r;
}

template <class T>
T pow(T a, T b)
{
	T r = 1;
	
	while (b)
	{
		if (b & 1)
			r = mul(r, a);
		
		b >>= 1;
		a = mul(a, a);
	}
	
	return r;
}

signed main(void)
{
	int a, b;
	cin >> a >> b;
	cout << pow(a, b) << endl;
}