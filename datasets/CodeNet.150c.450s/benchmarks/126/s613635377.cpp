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
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int n,m;
	while(cin>>m>>n,n||m){
		vector<vector<int> >in(n,vector<int>(m));
		vector<vector<int> >tmp(n,vector<int>(m));
		rep(i,n)rep(j,m)tmp[i][j]=true;
		in[0][0]=1;
		int q;
		cin>>q;
		rep(i,q){
			int x,y;
			cin>>y>>x;
			x--;y--;
			tmp[x][y]=false;
		}
		rep(i,n)rep(j,m){
			if(tmp[i][j]==false)continue;
			if(i+j==0)continue;
			else if(i==0)in[i][j]=tmp[i][j-1]*in[i][j-1];
			else if(j==0)in[i][j]=tmp[i-1][j]*in[i-1][j];
			else
				in[i][j]=tmp[i-1][j]*in[i-1][j]+tmp[i][j-1]*in[i][j-1];
		}
		cout<<in[n-1][m-1]<<endl;
	}
}