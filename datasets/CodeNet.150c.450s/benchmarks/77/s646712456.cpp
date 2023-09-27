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

int m[21][21];

int main() {
	int n,x,y;
	while(n=in()){
		memset(m,0,sizeof(m));
		while(n--){
			cin>>x>>y;
			m[y][x]=1;
		}
		x=10;y=10;
		cin>>n;
		string d;
		int l,i;
		while(n--){
			cin>>d>>l;
			if(d=="N"){
				for(i=0;i<=l;i++){
					m[y+i][x]=0;
				}
				y+=l;
			}
			if(d=="S"){
				for(i=0;i<=l;i++){
					m[y-i][x]=0;
				}
				y-=l;
			}
			if(d=="E"){
				for(i=0;i<=l;i++){
					m[y][x+i]=0;
				}
				x+=l;
			}
			if(d=="W"){
				for(i=0;i<=l;i++){
					m[y][x-i]=0;
				}
				x-=l;
			}
		}
		bool ok=true;
		for(y=0;y<21;y++){
			for(x=0;x<21;x++){
//cout<<m[y][x];
				if(m[y][x])ok=false;
			}
//cout<<endl;
		}
		cout<<(ok?"Yes":"No")<<endl;
	}
	return 0;
}