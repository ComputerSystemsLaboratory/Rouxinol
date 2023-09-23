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
int ans = 0;
//????????°,n-?????¨???????¨?,?????¨???????????????
void solve(int plus,int nowsum, int kaisu){
	if(kaisu == 0){
		if(nowsum == 0) ans++;
		return;
	}
	if(plus == 10) return;
	//plus???????????¨???
	solve(plus+1, nowsum - plus, kaisu-1);
	//plus?????????????????£?????¨???
	solve(plus+1, nowsum, kaisu);
}
int main(){
	int n,s;
	while(1){
		ans = 0;
		cin >> n >> s;
		if(n == 0 && s == 0) break;
		solve(0,s,n);
		cout << ans << endl;
	}	
}