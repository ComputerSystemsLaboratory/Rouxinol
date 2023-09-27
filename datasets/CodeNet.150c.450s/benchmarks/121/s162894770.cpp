#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007

int h,w;
string s[110];

vector<vi> v(110,vi(110,0));
int ans;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

void init(){
	rep(i,h)rep(j,w)v[i][j]=0;
	ans=0;
}

void calc(int y,int x,char c){
	if(y>=h||x>=w||y<0||x<0)return;
	if(v[y][x]==1)return;
	if(c!='?'&&s[y][x]!=c)return;
	v[y][x]=1;
	if(c=='?')ans++;
	rep(i,4){
		calc(y+dy[i],x+dx[i],s[y][x]);
	}
}


int main(){
	while(cin>>h>>w && h>0 && w>0){
		rep(i,h)cin>>s[i];
		init();
		rep(i,h){
			rep(j,w)calc(i,j,'?');
		}
		cout<<ans<<endl;
	}
}