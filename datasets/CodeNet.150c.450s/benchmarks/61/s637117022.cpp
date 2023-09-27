#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int dy[]={1,-1,0,0};
int dx[]={0,0,1,-1};
#define MAX 100000
int main(){
    int n,a,b,c,x;
    while(cin >> n >> a >> b >> c >> x,n|a|b|c|x){
        vector<int> y(n);
        rep(i,n) cin >> y[i];
        int cnt = 0;
        int frame = 0;
        while(1){
            if(frame > 10000) {
                cout << -1 << endl;
                break;
            }
            if(x==y[cnt]) cnt++;
            if(cnt == n) {
                cout << frame << endl;
                break;
            }
            x = (a*x+b)%c;
            frame++;
        }
    }
    return 0;
}

