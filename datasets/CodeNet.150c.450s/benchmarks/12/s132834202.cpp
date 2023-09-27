//last updated : 24.04.2020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <ll,ll> pll;

#define mp              make_pair
#define pb              push_back
#define fi              first
#define se              second

#define endl            '\n'
#define init			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db(x)           cout << ">>>>>> " << #x << " -> " << x << endl

const ll inf = INT_MAX;
const ll MAX = 1e5+5;
const ll MOD = 1e9+7;
const double pi = acos(-1.0);
const double EPS = 1e-9;

ll n;
ll arr[255];

int main() {
	init;
    // freopen ("input.txt", "r", stdin);
	// freopen ("output.txt", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << arr[i] << ", ";
		if (i/2) cout << "parent key = " << arr[i/2] << ", ";
		if (i*2 <= n) cout << "left key = " << arr[i*2] << ", ";
		if (i*2+1 <= n) cout << "right key = " << arr[i*2+1] << ", ";
		cout << endl;
	}

	return 0;
}

