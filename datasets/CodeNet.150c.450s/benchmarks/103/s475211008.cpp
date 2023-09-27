#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;

int n,s;

int dfs(int i,int j,int sum){
	if (sum>s) return 0;
	if (i==n){
		if (sum==s){
			return 1;
		}
		else {
			return 0;
		}
	}
	int res=0;
	FOR(k,j,10){
		res+=dfs(i+1,k+1,sum+k);
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	do{
		cin>>n>>s;
		if (n){
			cout<<dfs(0,0,0)<<endl;
		}
	}while (n);
	return 0;
}