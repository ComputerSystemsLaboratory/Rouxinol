#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int a,b,n;
	while(1){
		cin>>a>>b;
		if(a+b==0) break;
		cin>>n;
		vector<vector<int> > d(a,vector<int>(b,0));
		//vector<vector<int> > f(a,vector<int>(b));
		rep(i,0,n){
			int x,y;
			cin>>x>>y;
			x--;
			y--;
			d[x][y]=-1;
		}
		rep(i,0,b){
			rep(j,0,a){
				if(i==0 && j==0) d[0][0]=1;
				else if(d[j][i]==-1) d[j][i]=-1;
				else if(i==0) d[j][0]=max(0,d[j-1][0]);
				else if(j==0) d[0][i]=max(0,d[0][i-1]);
				else d[j][i]=max(0,d[j-1][i])+max(0,d[j][i-1]);
				//o(" "<<j<<" "<<i<<" "<<d[j][i]);
			}
		}
		o(d[a-1][b-1]);
	}
}