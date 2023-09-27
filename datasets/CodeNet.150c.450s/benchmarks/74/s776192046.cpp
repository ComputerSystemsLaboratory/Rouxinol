
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

vector<int> c;
ll inf = (ll)(1e13);
int t[500010];

int main() {
	int n, m;
	cin >> n >> m;
	c.resize(m);

	for (int i = 0; i <= n; i++) 
		t[i] = inf;
	t[0] = 0;

	for (int i = 0; i < m; i++) 
		cin >> c[i];

	for (int i = 0; i < m ; i++)
		for (int j = c[i]; j <= n; j++)
			t[j] = min(t[j], t[j - c[i]] + 1);

	cout << t[n] << endl;
	return 0;
}