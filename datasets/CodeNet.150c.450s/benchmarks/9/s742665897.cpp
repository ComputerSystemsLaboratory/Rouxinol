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
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define FORR(i,n,m) for(int i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define pi 	3.14159265358979323846


int main(){
	REP(k,10){
		string s;
		cin >> s;
		if(s=="-"){return 0;}
		ll m,j=0;
		cin >> m;
		REP(i,m){
			ll h;
			cin >> h;
			ll limit = j;
			FOR(i,j,h+limit){
				s += s[j];
				s[j] = '|';
				j=i+1;
			}
		}
		REP(i,s.size()){
			if(s[i]!='|'){
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
