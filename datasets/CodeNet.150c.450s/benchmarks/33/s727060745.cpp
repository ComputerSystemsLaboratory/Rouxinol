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


int main(){
	ll int mae,ato,kin;
	while(1){
		cin >> mae >> ato >> kin;
		if(mae==0&&ato==0&&kin==0) break;
		ll int ans = -1;
		FOR(i,1,kin){
			FOR(j,1,kin){
				if(i*(mae+100)/100+j*(mae+100)/100==kin){
					ans = max(ans,i*(100+ato)/100+j*(100+ato)/100);
				}
			}
		}
		cout << ans << endl;
	}
}