#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;
const int MOD = 1000000007;

typedef long long ll;
typedef pair<int, int> pr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int x, y, s;
        cin >> x >> y >> s;
        if((x|y|s) == 0) break;
        int ans = -1;
        for(int i = 1; i < s; i++){
            int p1 = i;
            int tp1 = p1 * (100 + x) / 100;
            int p2 = ceil((s - tp1) * 100.0 / (100 + x));
            if(p2 <= 0) continue;
            if(tp1 + p2 * (100 + x) / 100 != s) continue;
            ans = max(ans, p1 * (100 + y) / 100 + p2 * (100 + y) / 100);
        }
        cout << ans << endl;
    }
    return 0;
}