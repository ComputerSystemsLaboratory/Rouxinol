#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<28;
const ll INF=1ll<<50;
const double pi=acos(-1);
const double eps=1e-10;
const ll mod=1e9+7;
const vi emp;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,-0};
const int DX[8]={-1,-1,-1,0,0,1,1,1},DY[8]={1,0,-1,1,-1,1,0,-1};

int h,w,n;
vvc a;

int main(){
	cin>>h>>w>>n;
	a=vvc(h,vc(w));
	vp b(n+1);
	for(int i=0;i<h;i++) for(int j=0;j<w;j++){
		cin>>a[i][j];
		if(a[i][j]=='S') b[0]=P(i,j);
		else if(a[i][j]!='.'&&a[i][j]!='X') b[a[i][j]-'0']=P(i,j);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		vvc c=a;
		queue<pip> q;
		q.push(pip(0,b[i]));
		while(!q.empty()){
			pip p=q.front();
			q.pop();
			P r=p.second;
			bool flag=0;
			for(int j=0;j<4;j++){
				int cx=r.first+dx[j],cy=r.second+dy[j];
				if(cx>=0&&cx<h&&cy>=0&&cy<w&&c[cx][cy]!='X'){
					if(c[cx][cy]==(char)(i+1)+'0'){
						ans+=p.first+1;
						flag=1;
						break;
					}
					c[cx][cy]='X';
					q.push(pip(p.first+1,P(cx,cy)));
				}
			}
			if(flag) break;
		}
	}
	cout<<ans<<endl;
}