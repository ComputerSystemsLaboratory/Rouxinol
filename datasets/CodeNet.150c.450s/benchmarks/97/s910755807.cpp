#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;

int N;

void solve(){
    vector<int> n(N),d(N);
    vector<int> x(N,0),y(N,0);
    rep(i,N-1) cin >> n[i] >> d[i];
    int maxx=0,minx=0,maxy=0,miny=0;
    for(int i=0;i<N-1;i++){
        int xx = x[n[i]];
        int yy = y[n[i]];
        if(d[i]==0){
            xx--;
        }else if(d[i]==1){
            yy++;
        }else if(d[i]==2){
            xx++;
        }else if(d[i]==3){
            yy--;
        }
        x[i+1] = xx;
        y[i+1] = yy;
        maxx = max(maxx,xx);
        maxy = max(maxy,yy);
        minx = min(minx,xx);
        miny = min(miny,yy);
//        cout << x << " " << y << endl;
    }
    //cout << maxx << " " << minx << " " << maxy << " " <<miny << endl;
    cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
}

int main(){
    while(cin>>N){
        if(N==0) break;
        solve();
    }
}