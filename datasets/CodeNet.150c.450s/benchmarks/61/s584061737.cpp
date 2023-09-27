#include <bits/stdc++.h>
using namespace std;

#define int long long
#define DEBUG(x) cerr <<#x<<":"<<x<<endl;
#define DEBUG2(x, y) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define DEBUG3(x, y, z) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
#define DEBUGVC(x) cerr <<#x<<": "; for(auto a:x) cerr << a <<" "; cerr << endl;
#define DEBUGMP(x) cerr <<#x<<":"<<endl; for(auto a:x) cerr << a.first <<" "<< a.second << endl;
#define MAX_N (1000006)
#define INF (1LL << 60)
const int MOD = (int)1e9+7;


signed main() {
    while(1) {
        int n,a,b,c,x;
        cin >> n >> a >> b >> c >> x;
        if(n==0&&a==0&&b==0&&c==0&&x==0) return 0;
        vector<int> y(n);
        for(int i=0; i<n; i++) cin >> y[i];
        int idx=0;
        bool flag=false;
        for(int frame=1; frame<=10001; frame++){
            if(x==y[idx]){
                idx++;
            }
            if(idx==n){
                cout << frame-1 << endl;
                flag=true;
                break;
            }
            x = (a*x+b)%c;
        }
        if(!flag) cout <<"-1"<< endl;
    }
}
