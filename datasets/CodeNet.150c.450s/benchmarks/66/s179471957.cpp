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
    //while(1) {
        int n;
        cin >> n;
        vector<string> u(n);
        for(int i=0; i<n; i++) cin >> u[i];
        int m;
        cin >> m;
        vector<string> t(m);
        for(int i=0; i<m; i++) cin >> t[i];

        bool isOpen = false;
        for(int i=0; i<m; i++) {
            bool isUnknown = true;
            for(int j=0; j<n; j++) {
                if(t[i]==u[j]){
                    isUnknown = false;
                    if(isOpen){
                        cout << "Closed by " << t[i] << endl;
                        isOpen = false;
                        break;
                    } else {
                        cout << "Opened by " << t[i] << endl;
                        isOpen = true;
                        break;
                    }
                }
            }
            if(isUnknown) {
                cout << "Unknown " << t[i] << endl;
            }
        }
    //}
}
