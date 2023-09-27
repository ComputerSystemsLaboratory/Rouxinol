#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

int n, m, a[200000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = m; i < n; i++)
		cout << ((a[i - m] < a[i]) ? "Yes\n" : "No\n");
	return 0;
}