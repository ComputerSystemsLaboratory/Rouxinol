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

int st[60];

int main() {
	int n,p,pp;
	while(n=in(),pp=in()){
		p=pp;
		memset(st,0,sizeof(st));
		int i=0;
		while(true){
			if(p){
				st[i]++;
				p--;
				if(st[i]==pp)break;
			}else{
				p+=st[i];
				st[i]=0;
			}
			i++;
			i%=n;
		}
		cout<<i<<endl;
	}
	return 0;
}