#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <string>
#include <stack>
#include <cmath>
#define ll long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)
using namespace std;
//
const int inf=1e9+7;
const int mod=1e9+7;
//
struct poi{
	int X;int Y;int Z;
	bool operator<(const poi&R)const{
		return X==R.X ? Y==R.Y ? Z<R.Z : Y<R.Y : X<R.X;
	}
};
//
ll GCD(ll a,ll b){
	return (b==0)?(a):(GCD(b,a%b));
}
ll LCM(ll a,ll b){
	return a/GCD(a,b)*b;
}
//
int DP[101][10001];
int main(){
	int N,W;
	int v[100],w[100];
	cin>>N>>W;
	FOR(i,0,N){
		cin>>v[i]>>w[i];
	}
	FOR(i,0,N){
		FOR(j,0,W+1){
			DP[i+1][j]=max(DP[i+1][j],DP[i][j]);
			if(W-j>=w[i]){
				DP[i+1][j+w[i]]=max(DP[i+1][j+w[i]],DP[i][j]+v[i]);
			}
		}
	}
	cout<<DP[N][W]<<endl;
	return 0;
}
