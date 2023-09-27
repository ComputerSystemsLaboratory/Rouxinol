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

int y[110];

int main() {
	int n,a,b,c,x;
	while(cin>>n>>a>>b>>c>>x,n){
		int i;
		for(i=0;i<n;i++)cin>>y[i];
		int f;
		int s=0;
		for(f=0;f<=10000;f++){
			if(y[s]==x){
				s++;
				if(s==n)break;
			}
			x=(a*x+b)%c;
		}
		if(f>10000){
			cout<<-1<<endl;
		}else{
			cout<<f<<endl;
		}
	}
	return 0;
}