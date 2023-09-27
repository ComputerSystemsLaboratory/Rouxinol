#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define INF 1e9
#define rep(i,n) for(int i=0;i<n;i++)

int n,d[10][10],a,b,c;

int main(){
	while(cin>>n&&n){
		rep(i,10)fill(d[i],d[i]+10,INF);
		rep(i,10)d[i][i]=0;
		int m=0;
		rep(i,n){cin>>a>>b>>c;d[a][b]=c;d[b][a]=c;m=max(m,max(a,b));}
		m++;
		rep(k,m)rep(i,m)rep(j,m)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		int ans,ans2=INF;
		rep(i,m){
			int sum=0;
			rep(j,m)sum+=d[i][j];
			if(sum<ans2){ans2=sum;ans=i;}
		}
		cout<<ans<<" "<<ans2<<endl;
	}
}