#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-8;
const long long inf=1e16;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
vector<string>in;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m;
void f(int a,int b,char c){
	in[a][b]='!';
	rep(i,4){
		int nx=a+dx[i];
		int ny=b+dy[i];
		if(nx<0||ny<0||nx>=n||ny>=m)continue;
		if(in[nx][ny]==c)f(nx,ny,c);
	}
}
int main(){
	while(cin>>n>>m,n+m){
		in=vector<string>(n);
		rep(i,n)cin>>in[i];
		int co=0;
		rep(i,n)rep(j,m)if(in[i][j]!='!'){
			co++;
			f(i,j,in[i][j]);
		}
		cout<<co<<endl;
	}
}