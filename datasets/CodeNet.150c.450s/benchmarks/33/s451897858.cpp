#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())
int main(){
	while(1){
		int x,y,s; cin >> x >> y >> s; if(x==0&&y==0) return 0;
		int v[1005];
		for(int i=1;i<s;i++){
			double j = (double)i;
			j *= (100.0+(double)x)/100.0;
			v[i] = floor(j+1e-7);
		}
		int ret = 0;
		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				if(v[i]+v[j] != s) continue;
				double k = (double)i;
				k *= (100.0+(double)y)/100.0;
				int K = floor(k+1e-7);
				double l = (double)j;
				l *= (100.0+(double)y)/100.0;
				int L = floor(l+1e-7);
				ret = max(ret,K+L);
			}
		}
		cout << ret << endl;
	}
}