#include <iostream>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<int(n);i++)

int x[1600], y[1600];
int main(){
    int n,m;
    while(cin>>n>>m && n){
        x[0] = y[0] = 0;
        rep(i,n){
            int w; cin>>w;
            x[i+1] = x[i]+w;
        }
        rep(i,m){
            int h; cin>>h;
            y[i+1] = y[i]+h;
        }
        map<int,int> ws;
        rep(i,n+1)rep(j,i){
            ws[x[i]-x[j]]++;
        }
        int ans = 0;
        rep(i,m+1)rep(j,i){
            ans += ws[y[i]-y[j]];
        }
        cout << ans << endl;
    }
}