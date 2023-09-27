#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<n;++i)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 1502;

int h[MAX_N],w[MAX_N];
int n,m;

int main()
{
    while(1){
        scanf("%d%d",&n,&m);
        if(n == 0 && m == 0){
            break;
        }
    	rep(i,n){
    		scanf("%d",&h[i]);
    	}
        rep(i,m){
            scanf("%d",&w[i]);
        }
        int hoge = 0;
        vector<int> sumh,sumw;
        sumh.push_back(0),sumw.push_back(0);
        rep(i,n){
            hoge += h[i];
            sumh.push_back(hoge);
        }
        hoge = 0;
        rep(i,m){
            hoge += w[i];
            sumw.push_back(hoge);
        }
        map<int,int> mp;
        rep(i,n+1){
            for(int j = i+1; j < n+1; j++){
                mp[sumh[j] - sumh[i]]++;
            }
        }
        ll ans = 0;
        rep(i,m+1){
            for(int j = i+1; j < m+1; j++){
                ans += mp[sumw[j] - sumw[i]];
            }
        }
        printf("%lld\n",ans);
    }
	return 0;
}