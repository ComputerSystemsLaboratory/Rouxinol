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
	ll n;
	cin >> n;
	FOR(i,1,n+1){
		ll x=i;
		if(x%3==0){
			cout << " " << i;
			continue;
		}
		if(x%10==3||(x/10)%10==3||(x/100)%10==3||(x/1000)%10==3){
			cout << " " << i;
			continue;
		}
	}cout << endl;
  return 0;
}
