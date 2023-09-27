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

vector<pint> road;

int main() {
	int n,m;
	while(true){
		road.clear();
		cin>>n>>m;
		if(n==0&&m==0)break;
		int i;
		for(i=0;i<n;i++){
			int d,p;
			cin>>d>>p;
			road.push_back(mp(p,d));
		}
		sort(road.begin(),road.end(),greater<pint>());
		int res=0;
		for(i=0;i<n;i++){
			if(m>=road[i].second){
				m-=road[i].second;
			}else if(m>0){
				res+=road[i].first*(road[i].second-m);
				m=0;
			}else{
				res+=road[i].first*road[i].second;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}