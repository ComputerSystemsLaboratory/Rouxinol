#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second

int main(){
	int n;
	while(cin>>n,n){
		vvi v(n,vi(5));
		rep(i,n)rep(j,5)cin>>v[i][j];
		int ans=0;
		bool isC=true;
		while(isC){
	        isC=false;
    		rep(i,n){
    		    for(vi p : vvi{{0,5},{0,4},{1,5},{0,3},{1,4},{2,5}}){
        		    if(v[i][p[0]]!=0 && count(v[i].begin()+p[0], v[i].begin()+p[1], v[i][p[0]]) == p[1]-p[0]){
        		        isC=true;
        		        ans+=(p[1]-p[0])*v[i][p[0]];
        		        fill(v[i].begin()+p[0], v[i].begin()+p[1], 0);
        		        break;
        		    }
    		    }
    		}
    		rep(lp,n){
        		for(int i=n-1;i>=1;i--)rep(j,5){
        		    if(v[i][j]==0) swap(v[i-1][j], v[i][j]);
        		}
    		}
    		//rep(i,n){rep(j,5)cout<<v[i][j];cout<<endl;}
		}
	    cout<<ans<<endl;
	}
	return 0;
}