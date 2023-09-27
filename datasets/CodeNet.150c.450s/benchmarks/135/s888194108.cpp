/*
 * akeomekotoyoro~~~
 */

#include <cstdio>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int n,m;
int x[2015], y[2015];
int main(){
    while(~scanf("%d%d", &n,&m) && n){
        x[0] = y[0] = 0;
        rep(i,n){
            int w; scanf("%d", &w);
            x[i+1] = x[i]+w;
        }
        rep(i,m){
            int h; scanf("%d", &h);
            y[i+1] = y[i]+h;
        }
        map<int,int> ws;
        rep(i,n+1)rep(j,i) ws[x[i]-x[j]]++;
        int ans = 0;
        rep(i,m+1)rep(j,i) ans += ws[y[i]-y[j]];
        printf("%d\n",ans);
    }
}