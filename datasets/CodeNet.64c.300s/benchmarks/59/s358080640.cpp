#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

bool isPrime(int a){
	for (int i = 2;i*i <= a;i++){
		if(a%i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n; cin >> n;
	int ans = 0;

	for (int i = 0;i < n;i++){
		int a; cin >> a;
		if(isPrime(a)) ans++;
	}

	cout << ans << endl;

	return 0;

}

