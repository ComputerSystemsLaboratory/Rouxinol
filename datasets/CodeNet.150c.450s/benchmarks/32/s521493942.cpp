#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,k,n) for(int i=(int)(k);i<(int)(n);i++)

#define vi vector<int>
#define pb push_back

int main(){
//    ifstream in("a_in.txt");
//    cin.rdbuf(in.rdbuf());

    int m, m_min, m_max;
    while(cin >> m >> m_min >> m_max, m) {
        int P[200];
        rep(p, m) {
            cin >> P[p];
        }

        int sabun[200];
        sabun[0] = 0;
        REP(i, 1, m) {
            sabun[i] = P[i-1] - P[i];
        }

        int s_max = 0;
        int ans = 0;
        REP(i, m_min, m_max+1) {
            if(s_max <= sabun[i]) {
                s_max = sabun[i];
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
