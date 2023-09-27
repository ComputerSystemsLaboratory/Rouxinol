#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define endl "\n"

int main()
{
	faster;

	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);

	for (auto &x : a)
		cin >> x;

	for(int i = 1; i < n; i++){
		a[i] += a[i-1];
	}

	for(int i = k; i < n; i++){
		if(i == k && a[i]-a[i-k] > a[i-1]){
			cout << "Yes" << endl;
		}else if(i == k){
			cout << "No" << endl;
		}
		if(i != k && a[i] - a[i-k] > a[i-1]-a[i-k-1]){
			cout << "Yes" << endl;
		}else if(i != k){
			cout << "No" << endl;
		}
	}
	return 0;
}