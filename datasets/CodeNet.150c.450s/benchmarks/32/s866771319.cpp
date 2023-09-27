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
        int m, n_min, n_max;
        cin >> m >> n_min >> n_max;
        if(m==0&&n_min==0&&n_max==0) return 0;
        vector<int> p(m);
        for(int i=0; i<m; i++) cin >> p[i];
        sort(p.rbegin(),p.rend());
        vector<pair<int,int>> n;
        for(int i=n_min; i<=n_max; i++) {
            n.push_back(make_pair(p[i-1]-p[i], i));
            //cout << p[i-1]-p[i] <<" "<< i << endl;
        }
        sort(n.rbegin(),n.rend());
        //for(int i=0; i<n.size(); i++) cout << n[0].first <<" "<< n[0].second << endl;
        cout << n[0].second << endl;
    }
}
