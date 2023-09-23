#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>
#include <queue>
#include <utility>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int d[11][11];//d[u][v]??????e=(u,v)????????????(?????¨???????????´??????INF,??????d[i][i]=0??¨??????)
int V=10;//????????°
const int INF=10000000;

void warshall_floyd(){
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}

int main(){
	while(1){
		rep(i,0,10){
			rep(j,0,10){
				if(i==j) d[i][j]=0;
				else d[i][j]=INF;
			}
		}
		int n;
		cin>>n;
		if(n==0) break;
		int from,to,dist;
		rep(i,0,n){
			cin>>from>>to>>dist;
			d[from][to]=dist;
			d[to][from]=dist;
		}
		warshall_floyd();
		int MIN=INF,ans=0;
		rep(i,0,10){
			int sum=0;
			rep(j,0,10){
				if(d[i][j]!=INF) sum+=d[i][j];
			}
			if(sum==0) continue;
			if(sum<MIN){
				MIN=sum;
				ans=i;
			}
		}
		o(ans<<" "<<MIN);
	}
}