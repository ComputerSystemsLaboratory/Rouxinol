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
	int n,m,l;
	ll int a[100][100];
	ll int b[100][100];
	ll int c[100][100];
	cin >> n >> m >> l;
	REP(i,n) REP(j,m) cin >> a[i][j];
	REP(i,m) REP(j,l) cin >> b[i][j];
	REP(i,n){
		REP(j,l){
			ll int sum = 0;
			REP(k,m){
				sum += a[i][k]*b[k][j];
			}
			c[i][j] = sum;
		}
	}
	REP(i,n){
		REP(j,l){
			cout << c[i][j];
			if(j!=l-1) cout << " ";
		}
		cout << endl;
	}
}