#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,m,n) for(ll i=m;i<n;i++)
#define REPR(i,n) for(ll i=n-1;i>=0;i--)
#define FORR(i,n,m) for(ll i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define pi 	3.14159265358979323846

int main(){
	ll n,m;
	cin >> n >> m;
	ll c1[100][100];
	REP(i,n){
		REP(j,m){
			cin >> c1[i][j];
		}
	}
	ll c2[100];
	REP(i,m){
		cin >>c2[i];
	}
	ll ans[100];
	REP(i,n){
		REP(j,m){
			ans[i] += c1[i][j] * c2[j];
		}
	}
	REP(i,n){
		cout << ans[i] <<endl;
	}
	return 0;
}
