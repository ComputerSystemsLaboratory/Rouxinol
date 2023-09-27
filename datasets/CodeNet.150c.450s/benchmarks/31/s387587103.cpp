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
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	ll int data[200001];
	int n;
	cin >> n;
	REP(i,n) cin >> data[i];
	ll int prev = 999999999;
	ll int ans = -999999999;
	REP(i,n-1){
		if(prev<data[i]) continue;
		FOR(j,i+1,n){
			ans = max(ans,data[j]-data[i]);
		}
		prev = data[i];
	}
	cout << ans << endl;
}