#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

signed main(){
	int a, b;
	while(cin >> a >> b){
		if(a < b) swap(a, b);
		int g = gcd(a, b);
		int l = a * b / g;
		cout << g << " " << l << endl;
	}
}