#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define alint(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

lint n,s,ans=0;

void solve(lint n,lint sum,lint max){
	if(n){
		rep(i,max+1,10){
			solve(n-1,sum+i,i);
		}
	}else if(sum==s){
		ans++; return;
	}
	return;
}


int main(){
	while(1){
		cin>>n>>s;
		if(n==0 && s==0) break;
		ans=0;
		solve(n,0,-1);
		o(ans);
	}
}