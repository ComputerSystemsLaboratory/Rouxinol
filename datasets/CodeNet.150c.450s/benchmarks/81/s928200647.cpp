#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
const int inf=1e9;
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int in[11][11];
    rep(i,11)rep(j,11)in[i][j]=inf;
    int maax=0;
    rep(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      in[a][b]=c;
      in[b][a]=c;
      maax=max(maax,a);
      maax=max(maax,b);
    }
    n=maax+1;
    int mini=inf;
    int out;
    rep(i,n){
      int sum=0;
      rep(j,n){
	if(i==j)continue;
	vector<vector<int> >tmp(n,vector<int>(n));
	rep(a,n)rep(b,n)tmp[a][b]=in[a][b];
	rep(k,n)rep(a,n)rep(b,n)tmp[a][b]=min(tmp[a][b],tmp[a][k]+tmp[k][b]);
	sum+=tmp[i][j];
	//cout<<" "<<i<<" "<<j<<" "<<sum<<endl;
      }
      if(mini>sum){
	mini=sum;
	out=i;
      }
      //cout<<i<<" ! "<<sum<<endl;
    }
    cout<<out<<" "<<mini<<endl;
  }
}