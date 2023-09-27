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

int osenbei[10][10000];

int main() {
	int r,c;
	while(cin>>r>>c,r){
		int i,j;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>osenbei[i][j];
			}
		}
		int bit,res=0,a,b,t;
		for(bit=0;bit<1<<r;bit++){
			t=0;
			for(j=0;j<c;j++){
				a=b=0;
				for(i=0;i<r;i++){
					if(osenbei[i][j]^bit>>i&1)a++;
					else b++;
				}
				t+=max(a,b);
			}
			chmax(res,t);
		}
		cout<<res<<endl;
	}
	return 0;
}