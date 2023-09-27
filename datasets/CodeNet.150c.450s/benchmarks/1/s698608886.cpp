#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
#define yesno(flg) if(flg){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define MAX_N 1002
#define i197 1000000007

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P1;
typedef pair<int,int> Pi;
typedef pair<double,Pi> Pdi;
typedef pair<ll,int>Pli;
typedef pair<P1,ll> P2;
typedef pair<string,string> Ps;
const ll INF=1000000000000000001;
struct edge{int to,cost;};
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
struct Road{double cost;int a,b;};
struct pos{
	// 1 変数を入れる;
	int x,y,sx,sy,cost;
};
int n;
ll a[100001];
ll dp[100001]={};

ll BinarySearch(ll b){
	int left=0,right=n;
	while(right-left>1){
		int mid=(right+left)/2;
		if(dp[mid]>=b)right=mid;
		if(dp[mid]<b)left=mid;
	}
	return right;
}

int main() {

	cin>>n;
	rep(i,n){
		cin>>a[i+1];
		dp[i+1]=INF;
	}
	rep(i,n){
		dp[BinarySearch(a[i+1])]=min(dp[BinarySearch(a[i+1])],a[i+1]);
	}
	rrep(i,n){
		if(dp[i+1]!=INF){
			cout<<i+1<<endl;
			return 0;
		}
	}

	return 0;
}

