#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int gcd(int a, int b) { if (!b)return a; return gcd(b, a%b); }
int main() {
	int x, y; cin >> x >> y;
	cout << gcd(max(x, y), min(x, y)) << endl;
}