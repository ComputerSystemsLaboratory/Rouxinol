#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int gcd(int a, int b){
	if(a > b) swap(a,b);
	while(b % a != 0){
		int na,nb;
		na = max(a,b)-min(a,b);
		nb = min(a,b);
		a = na;
		b = nb;
	}
	return min(a,b);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a,b; cin >> a >> b;

	cout << gcd(a,b) << endl;

	return 0;

}

