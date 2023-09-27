#include<bits/stdc++.h>
//cout<<setprecision(1)<<fixed<<endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;
#define eps 1e-7
//#define Kongxiangzhouye
int n;
int a[123][123];
int st[123];
int ed[123];
int now;
void dfs(int local){
	st[local]=now++;
	for(int i=1;i<=n;i++){
		if(a[local][i]){
			if(st[i]==0){
				dfs(i);
			}
		}
	}
	ed[local]=now++;
}
int main(){
	ios::sync_with_stdio(false);
	while(cin>>n){
		memset(a,0,sizeof(a));
		memset(st,0,sizeof(st));
		memset(ed,0,sizeof(ed));
		for(int i=0;i<n;i++){
			int t,m;
			cin>>t>>m;
			for(int i=0;i<m;i++){
				int te;
				cin>>te;
				a[t][te]=1;
			}
			now=1;
		}
		for(int i=1;i<=n;i++){
			if(!st[i])
				dfs(i);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<" "<<st[i]<<" "<<ed[i]<<endl;
		}
	}
	return 0;
}




