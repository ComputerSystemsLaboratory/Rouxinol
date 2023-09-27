#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll int n,a,b,c,x;

ll int getrand(int x){
	return (x*a+b)%c;
}
int main(){
	int rdata[10001];
	while(1){
		cin >> n >> a >> b >> c >> x;
		if(n==0&&a==0&&b==0&&c==0&&x==0) break;
		REP(i,n) cin >> rdata[i];
		ll int cnt = 0;
		bool update = false;
		REP(i,n){
			while(1){
				if (update) {x = getrand(x); update = false;cnt++;};
				if(x==rdata[i]) {
					update = true;
					break;
				}else{
					x = getrand(x);
				}

				cnt++;
				if(cnt>10000) {
					i = n;
					break;
				}
			}
		}
		if(cnt>10000) cout << -1 << endl;
		else cout << cnt << endl;
	}
}