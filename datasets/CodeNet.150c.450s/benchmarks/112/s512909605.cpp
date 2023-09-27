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

char a[100][2];

int main() {
	int n,m;
	while(n=in()){
		int i;
		for(i=0;i<n;i++){
			cin>>a[i][0]>>a[i][1];
		}
		m=in();
		for(i=0;i<m;i++){
			char ch;
			int j;
			cin>>ch;
			for(j=0;j<n;j++){
				if(a[j][0]==ch){
					cout<<a[j][1];
					break;
				}
			}
			if(j==n)cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}