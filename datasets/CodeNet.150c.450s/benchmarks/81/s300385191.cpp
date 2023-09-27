#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

typedef long long ll;
ll d[200][200];
int main(){
    int n;
    while(cin>>n && n){
        set<int> app;
        rep(i,200)rep(j,200)d[i][j]=1LL<<60;
        rep(i,200)d[i][i]=0;
        rep(i,n){
            ll a,b,c;
            cin>>a>>b>>c;
            d[a][b]=d[b][a]=c;
            app.insert(a);
            app.insert(b);
        }
        rep(k,200)rep(i,200)rep(j,200)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        int ans=0;
        ll ans_sum=1LL<<60;
        for(int i:app){
            ll sum=0;
            for(int j:app){
                sum+=d[i][j];
            }
            if(ans_sum > sum){
                ans_sum = sum;
                ans = i;
            }
        }

        cout << ans << " " << ans_sum << endl;
    }
}