#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

typedef long long ll;
using namespace std;

ll fact(ll n)
{
	return n<=1 ? 1 : n*fact(n-1);
}

int main()
{
	ll n;
	scanf("%lld",&n);
	cout << fact(n) << endl;
}