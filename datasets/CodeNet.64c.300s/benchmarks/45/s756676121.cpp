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

int x[110];

int main() {
	int n,m,p;
	while(cin>>n>>m>>p,n){
		m--;
		int i,sum=0;
		for(i=0;i<n;i++){
			cin>>x[i];
			sum+=x[i];
		}
		sum*=100-p;
		if(x[m]==0)cout<<0<<endl;
		else cout<<sum/x[m]<<endl;
	}
	return 0;
}