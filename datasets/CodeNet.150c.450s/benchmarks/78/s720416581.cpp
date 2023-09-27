#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define EPS 1e-14

#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp
#define pb push_back

#define fi
#define se

#define each

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef long long ll;

int f(int n, int m, vi a){
	vi t(n+1,INF);
	t[0] = 0;
	rep(i,m){
		REP(j,a[i],n+1){
			t[j] = min(t[j],t[j-a[i]]+1);
		}
	}
	return t[n];
}

int main(){
	vi a;
	vi ao;
	REP(i,1,200){
		a.pb(i*(i+1)*(i+2)/6);
	}
	rep(i,a.size()){
		if(a[i]%2==1) ao.pb(a[i]);
	}

	// rep(i,a.size()) cout<<a[i]<<endl;
	// cout<<"=--"<<endl;
	// rep(i,ao.size()) cout<<ao[i]<<endl;

	while(1){
		int n; cin>>n;
		if(n==0) break;
		cout<<f(n,a.size(),a)<<" "<<f(n,ao.size(),ao)<<endl;
	}
	return 0;
}