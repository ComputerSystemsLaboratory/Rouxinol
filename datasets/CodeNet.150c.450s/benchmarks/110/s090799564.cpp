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
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
int n,m,a;
int solve(){
	vector<int>x(a+1);
	vector<int>y(a+1);
	vector<vector<char> >in(n+2,vector<char>(m+2));
	rep(i,n+2)rep(j,m+2){
		if(!i||!j||i==n+1||j==m+1)in[i][j]='X';
		else cin>>in[i][j];
		if(in[i][j]=='S')in[i][j]='0';
		if(isdigit(in[i][j])){
			int d=in[i][j]-'0';
			x[d]=i;y[d]=j;
		}
	}
	int out=0;
	rep(i,a){
		vector<vector<int> >tmp(n+2,vector<int>(m+2));
		vector<int>nx;
		vector<int>ny;
		rep(j,n+2)rep(k,m+2)tmp[j][k]=inf;
		tmp[x[i]][y[i]]=0;
		nx.pb(x[i]);
		ny.pb(y[i]);
		while(nx.size()){
			//rep(j,n+2){rep(k,m+2)cout<<tmp[j][k];cout<<endl;}
			if(nx[0]==x[i+1]&&ny[0]==y[i+1]){out+=tmp[nx[0]][ny[0]];break;}
			rep(j,4){
				if(in[nx[0]+dx[j]][ny[0]+dy[j]]!='X'&&tmp[nx[0]+dx[j]][ny[0]+dy[j]]>tmp[nx[0]][ny[0]]+1){
					tmp[nx[0]+dx[j]][ny[0]+dy[j]]=tmp[nx[0]][ny[0]]+1;
					nx.pb(nx[0]+dx[j]);
					ny.pb(ny[0]+dy[j]);
				}
			}
			nx.erase(nx.begin());
			ny.erase(ny.begin());
		}
	}
	return out;
}
int main(){
	cin>>n>>m>>a;
	cout<<solve()<<endl;
}