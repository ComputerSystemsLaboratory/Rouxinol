#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)


int main(){
	int m,nmin,nmax;
	while(cin>>m>>nmin>>nmax&&(m||nmin||nmax)){
		vector<int> v(m);
		rep(i,m)cin>>v[i];
		
		int maxi = -1;
		int pos = -1;
		for(int i=nmin;i<=nmax;i++){
			int t = v[i-1]-v[i];
			if(maxi<=t){
				maxi = t;
				pos = i;
			}
		}
		cout<<pos<<endl;
	}
}