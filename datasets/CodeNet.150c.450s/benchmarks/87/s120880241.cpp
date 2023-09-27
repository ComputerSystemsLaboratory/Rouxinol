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

int h;
int ans;
vector<vi> v(11,vi(5,0));
vector<vi> f(11,vi(5,0));



bool serch(){
	bool ret=false;
	rep(i,h){
		rep(j,5)f[i][j]=0;
	}
	rep(i,h){
		for(int j=0; j<3; j++){
			if(v[i][j]>0&&v[i][j]==v[i][j+1]&&v[i][j]==v[i][j+2]){
				f[i][j]=f[i][j+1]=f[i][j+2]=1;
				if(!ret)ret=true;
			}
		}
	}
	return ret;
}

void fall(){
	rep(i,h){
		rep(j,5){
			if(f[i][j]==1){
				ans+=v[i][j];
				for(int k=i; k>0; k--){
					v[k][j]=v[k-1][j];
				}
				v[0][j]=-1;
			}
		}
	}
}

int main(){
	while(cin>>h && h>0){
		ans=0;
		rep(i,h){
			rep(j,5)cin>>v[i][j];
		}
		while(serch()){
			fall();
		}
		cout<<ans<<endl;
		// rep(i,h){
		// 	rep(j,5){
		// 		cout<<(v[i][j]==-1?' ':(char)('0'+v[i][j]));
		// 	}
		// 	cout<<endl;
		// }
	}
}