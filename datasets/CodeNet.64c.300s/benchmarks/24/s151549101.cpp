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

int main() {
	int n;
	int resa,resb;
	while(n=in()){
		resa=0;resb=0;
		int a,b;
		int i;
		for(i=0;i<n;i++){
			cin>>a>>b;
			if(a>b)resa+=a+b;
			else if(a<b)resb+=a+b;
			else{resa+=a;resb+=b;}
		}
		cout<<resa<<" "<<resb<<endl;
	}
	return 0;
}