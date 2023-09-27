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

int inp[1000000];
	
int main() {
	int n,m;
	while(n=in(),m=in()){
		int i;
		for(i=0;i<n;i++){
			inp[i]=in();
		}
		Int max;
		Int sum=0;
		int k;
		for(k=0;k<m;k++){
			sum+=inp[k];
		}
		max=sum;
		for(i=0;i<=n-m;i++){
			if(max<sum)max=sum;
			sum-=inp[i];
			if(i!=n-m)sum+=inp[i+m];
		}
		cout<<max<<endl;
	}
	return 0;
}