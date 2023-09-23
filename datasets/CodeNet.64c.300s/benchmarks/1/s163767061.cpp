#include<bits/stdc++.h>

using namespace std;
#define fordebug int hoge;cin>>hoge;
#define DEKAI 1000000007;
#define INF 2000000000
#define int long long
#define lp(i,n) for(int i=0;i<n;i++)
#define lps(i,j,n) for(int i=j;i<n;i++)
int a[100000];

int partition(int p,int r){
	int x=a[r];
	int i=p-1;
	lps(j,p,r){
		if(a[j]<=x){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
return i+1;
}

signed main(){
	int n;
	cin>>n;
	lp(i,n) cin>>a[i];
	int p=partition(0,n-1);
	lp(i,n){
		if(i) cout<<" ";
		if(i==p) cout<<"["<<a[i]<<"]";
		else cout<<a[i];
	}
	cout<<endl;
	return 0;
}
