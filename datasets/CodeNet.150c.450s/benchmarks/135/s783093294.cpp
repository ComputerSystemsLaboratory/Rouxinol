#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

vector<int> xx;
int xxx[1500010];
vector<int> yy;
int yyy[1500010];

int main() {
	int n,m;
	while(cin>>n>>m,n){
		int i;
		int x,y;
		x=y=0;
		xx.clear();
		yy.clear();
		xx.push_back(0);
		yy.push_back(0);
		for(i=0;i<n;i++){
			x+=in();
			xx.push_back(x);
		}
		for(i=0;i<m;i++){
			y+=in();
			yy.push_back(y);
		}
		memset(xxx,0,sizeof(xxx));
		memset(yyy,0,sizeof(yyy));
		int j;
		for(i=0;i<n;i++){
			for(j=i+1;j<=n;j++){
				xxx[xx[j]-xx[i]]++;
			}
		}
		for(i=0;i<m;i++){
			for(j=i+1;j<=m;j++){
				yyy[yy[j]-yy[i]]++;
			}
		}
		int res=0;
		for(i=0;i<1500010;i++){
//if(xxx[i])cout<<"x:"<<i<<" "<<xxx[i]<<endl;
//if(yyy[i])cout<<"y:"<<i<<" "<<yyy[i]<<endl;
			res+=xxx[i]*yyy[i];
		}
		cout<<res<<endl;
	}
	return 0;
}