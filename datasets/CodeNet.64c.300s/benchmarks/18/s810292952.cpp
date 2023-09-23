#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define rep(i,n) for(int i=0; i<n; i++)
#define INF (1<<20)

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;

int a[40], n;

int main()
{
	while (cin >> n, n) {
		a[0] = 1;
		for (int i = 1; i <= 32; i++) {
			a[i] = a[i - 1];
			if (i - 2 >= 0)a[i] += a[i - 2];
			if (i - 3 >= 0)a[i] += a[i - 3];
		}
		cout << ceil(a[n] / 10.0 / 365.0) << endl;
	}
	return	0;
}