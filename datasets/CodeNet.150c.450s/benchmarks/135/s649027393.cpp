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

int n,m;
int h[1600];
int w[1600];

#define array_num 1600000
int mh[array_num];
int mw[array_num];
int main(){
	while(1){
		cin >> n >> m;
		if(n==0&&m==0) break;
		REP(i,array_num){
			mh[i] = 0;
			mw[i] = 0;
		}
		REP(i,n) cin >> h[i];
		REP(i,m) cin >> w[i];
		REP(i,n){
			ll int sum = h[i];
			mh[sum]++;
			FOR(j,i+1,n){
				sum += h[j];
				mh[sum]++;
			}
		}
		REP(i,m){
			ll int sum = w[i];
			mw[sum]++;
			FOR(j,i+1,m){
				sum += w[j];
				mw[sum]++;
			}
		}
		ll int ans = 0;
		REP(i,array_num){
			ans += mw[i]*mh[i];
		}
		cout << ans << endl;
	}
}