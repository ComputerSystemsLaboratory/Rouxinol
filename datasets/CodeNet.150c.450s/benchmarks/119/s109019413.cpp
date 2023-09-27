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

int sea[60][60];
int w,h;

void f(int x,int y){
//cout<<x<<" "<<y<<endl;
	int i,j;
/*for(i=0;i<h;i++){
	for(j=0;j<w;j++){
		cout<<sea[i][j]<<" ";
	}
	cout<<endl;
}*/
	sea[y][x]=0;
	for(i=-1;i<2;i++){
		for(j=-1;j<2;j++){
			if(y+i<0||h<=y+i||x+j<0||w<=x+j)continue;
			if(sea[y+i][x+j]==1)f(x+j,y+i);
		}
	}
}

int main() {
	while(w=in(),h=in()){
		int i,j;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				cin>>sea[i][j];
			}
		}
		/*for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				cout<<sea[i][j]<<" ";
			}
			cout<<endl;
		}*/
		int res=0;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(sea[i][j]==1){
					f(j,i);
					res++;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}