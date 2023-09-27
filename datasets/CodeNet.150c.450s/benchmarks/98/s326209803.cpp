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

int taro[110],hanako[110];

int main() {
	int n,m;
	while(n=in(),m=in()){
		int i;
		int sumt=0,sumh=0;
		for(i=0;i<n;i++){
			cin>>taro[i];
			sumt+=taro[i];
		}
		for(i=0;i<m;i++){
			cin>>hanako[i];
			sumh+=hanako[i];
		}
		int j;
		int rest=1000,resh=1000;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(sumt-taro[i]+hanako[j]==sumh-hanako[j]+taro[i]){
					if(rest>taro[i]){
						rest=taro[i];
						resh=hanako[j];
					}
				}
			}
		}
		if(rest!=1000)cout<<rest<<" "<<resh<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}