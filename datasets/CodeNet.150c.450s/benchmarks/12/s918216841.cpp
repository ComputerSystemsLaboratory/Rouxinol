#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> P;

#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<(b);i++)
#define repr(i,b,a) for(int i=int(b);i>=(a);i--)
#define all(x) x.begin(),x.end()

const ll mod = 1e9+7;
const ll INF = 2e9+1;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool valid(int lx,int ux,int ly,int uy,int x,int y){
	return lx<=x&&x<ux&&ly<=y&&y<uy; 
}
ll power(ll x,ll p){
	if(p==0)return 1;
	ll res=power(x*x%mod,p/2);
	if(p%2==1)res=res*x%mod;
	return res;
}

void printInfo(vector<int> &a, int id){
	int n = a.size();

	int key        = a[id];
	// int parent_key = INF;
	// int left_key   = INF;
	// int right_key  = INF;
	printf("node %d: ",id+1);
	printf("key = %d, ",key);
	if(id!=0) printf("parent key = %d, ",a[(id-1)/2]);
	if(id*2+1<n)printf("left key = %d, ",a[id*2+1]);
	if(id*2+2<n)printf("right key = %d, ",a[id*2+2]);
	printf("\n");
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,n)cin>>a[i];

	rep(i,n) printInfo(a,i);

	return 0;
}
