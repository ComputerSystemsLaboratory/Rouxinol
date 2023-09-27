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

int main() {

	int n;
	cin>>n;
	rep(i,n){
		long double x1,x2,x3,x4,y1,y2,y3,y4;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		long double a,b,c,d;
		a=x2-x1;
		b=y2-y1;
		c=x4-x3;
		d=y4-y3;
		if(b/a==d/c)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}

