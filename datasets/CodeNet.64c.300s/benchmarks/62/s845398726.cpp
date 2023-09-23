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
	ll int a[100][100];
	ll int b[100];
	int n,m;
	cin >> n >> m;
	REP(i,n) REP(j,m) cin >> a[i][j];
	REP(i,m) cin >> b[i];
	REP(i,n){
		ll int sum = 0;
		REP(j,m){
			sum += a[i][j]*b[j];
		}
		cout << sum << endl;
	}	
}