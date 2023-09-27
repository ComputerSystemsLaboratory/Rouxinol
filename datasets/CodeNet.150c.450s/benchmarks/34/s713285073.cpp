#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	ll int a[31] = {0};
	a[1] = 1; a[2] = 2; a[3] = 4;
	FOR(i,4,31){
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	int n;
	while(cin >> n, n){
		cout << ((a[n]%3650==0) ? a[n]/3650 : a[n]/3650 + 1) << endl;
	}
}