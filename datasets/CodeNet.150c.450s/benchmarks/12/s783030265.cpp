    
#include<iostream>
#include<vector>

using namespace std;
typedef long long ll;


int main() {



	ll n;

	cin >> n;
	vector<ll> keys(n + 1);

	for (int i = 0;i < n;i++) {
		cin >> keys[i + 1];
	}

	for (ll i = 1;i <= n;i++) {

		cout << "node " + to_string(i) + ": ";
		cout << "key = " + to_string(keys[i]) + ", ";

		if (i > 1) 	cout << "parent key = " + to_string(keys[i / 2]) + ", ";
		if (i * 2 <= n) cout << "left key = " + to_string(keys[i * 2]) + ", ";
		if (i * 2 + 1 <= n) cout << "right key = " + to_string(keys[i * 2 + 1]) + ", ";

		cout << endl;
	}
	
	return 0;
}

