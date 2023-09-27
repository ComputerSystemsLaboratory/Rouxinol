// Osaki
// 所要時間 分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int time[86500] = {};
        rep(i, n){
            int hh1, mm1, ss1;
            int hh2, mm2, ss2;
            scanf("%d:%d:%d", &hh1, &mm1, &ss1);
            scanf("%d:%d:%d", &hh2, &mm2, &ss2);
            int t1 = hh1 * 3600 + mm1 * 60 + ss1;
            int t2 = hh2 * 3600 + mm2 * 60 + ss2;
            time[t1]++;
            time[t2]--;
        }
        int ans = 0;
        rep(i, 86450){
            time[i+1] = time[i+1] + time[i];
        }
        rep(i, 86450){
            ans = max(ans, time[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
