#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n,m=11;
	while(cin>>n,n){
		vector<vector<int> >cost(m,vector<int>(m));
		rep(i,m)rep(j,m)cost[i][j]=inf;
		rep(i,n){
			int a,b,c;cin>>a>>b>>c;
			cost[a][b]=c;
			cost[b][a]=c;
		}
		int mi=1e9,mii=-1;
		rep(k,m){
			vector<bool>used(m);
			vector<int>d(m,inf);
			d[k]=0;
			while(1){
				int v=-1;
				rep(i,m)if(!used[i]&&(v==-1||d[v]>d[i]))v=i;
				if(v==-1)break;
				used[v]=true;
				rep(i,m)d[i]=min(d[i],d[v]+cost[v][i]);
			}
			int sum=0;
			rep(i,m)if(d[i]!=inf)sum+=d[i];
			if(mi>sum&&sum){mi=sum;mii=k;}
		}
		cout<<mii<<" "<<mi<<endl;
	}
}