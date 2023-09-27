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
        int n,m,p;
        cin >> n >> m >> p;
        if(n==0 && m==0 && p==0) return 0;
        vector<int> x(n);
        for(int i=0; i<n; i++) cin >> x[i];
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += x[i];
        }
        //DEBUG(sum);
        //DEBUG((sum*100)*(100-p)/100);
        if (x[m-1] == 0) {
            cout << 0 << endl;
            continue;
        }
        int y = (sum*100) * (100-p) / (x[m-1] * 100);
        cout << y << endl;

    }
}
