#include<bits/stdc++.h>
#include<iostream>
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
int f[10001]={};

int main() {

	int n;
	cin>>n;
	for(int i=1; i<101; i++){
		for(int j=1; j<101; j++){
			for(int k=1; k<101; k++){
				ll t=i*i+j*j+k*k+i*j+j*k+k*i;
				if(t>n)break;
				f[t]++;
			}
		}
	}
	rep(i,n)cout<<f[i+1]<<endl;

	return 0;
}
