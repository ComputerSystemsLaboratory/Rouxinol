#include<bits/stdc++.h>

using namespace std;
#define fordebug int hoge;cin>>hoge;
#define DEKAI 1000000007;
#define INF 2000000000
#define int long long
#define lp(i,n) for(int i=0;i<n;i++)
#define lps(i,j,n) for(int i=j;i<n;i++)
int a[10001];
signed main(){
	int n;
	cin>>n;
	lp(i,n){
		int hoge;
		cin>>hoge;
		a[hoge]++;
	}
	int st=0;
	lp(i,10001){
		while(a[i]!=0){
			if(st==1) cout<<" ";
			cout<<i;
			st=1;
			a[i]--;
		}
	}
	cout<<endl;
	return 0;
}
