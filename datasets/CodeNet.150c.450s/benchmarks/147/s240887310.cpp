#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <vector>
#include <map>
using namespace std;

#define cio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define ii pair < int, int >
#define iii pair < int, ii >
#define INF 987654321
#define LINF 987654321987654321

ll arr[10005];
ll rett(ll a, ll b, ll c)
{
	return a * (a + b) + b * (b + c) + c * (c + a);
}

int main()
{
	cio;

	int n;
	cin >> n;

	for(ll i = 1; i <= 100; i++)
		for (ll j = 1; j <= 100; j++)
		{
			for (ll k = 1; k <= 100; k++)
			{
				ll gop = rett(i, j, k);
				if (gop > n)
					break;
				arr[gop]++;
			}
		}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << endl;
}