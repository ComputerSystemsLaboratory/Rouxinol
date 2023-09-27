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

int m[20][20];

int main() {
	int i,j;
	int x,y;
	while(cin>>x>>y,x){
		memset(m,0,sizeof(m));
		int n=in();
		for(i=0;i<n;i++){
			int xx,yy;
			cin>>xx>>yy;
			m[yy][xx]=-1;
		}
		for(j=1;j<=y;j++){
			for(i=1;i<=x;i++){
				if(m[j][i]==-1)m[j][i]=0;
				else if(i==1&&j==1)m[j][i]=1;
				else if(i==1)m[j][i]=m[j-1][i];
				else if(j==1)m[j][i]=m[j][i-1];
				else m[j][i]=m[j-1][i]+m[j][i-1];
			}
		}
		cout<<m[y][x]<<endl;
	}
	return 0;
}