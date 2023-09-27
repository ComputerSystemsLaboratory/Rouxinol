#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;
const int MOD = 1000000007;

typedef long long ll;
typedef pair<int, int> pr;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(true){
        int n, a, b, c, x;
        int y[100];
        cin >> n >> a >> b >> c >> x;
        if((n|a|b|c|x) == 0) break;
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        int nx = x;
        int cnt = 0;
        int ind = 0;
        for(cnt = 0; cnt <= 10000; cnt++){
            if(y[ind] == nx){ ++ind; }
            if(ind == n) break;
            nx = (a * nx + b) % c;
        }
        if(cnt > 10000){
            cout << -1 << endl;
        }else{
            cout << cnt << endl;
        }
    }

    return 0;
}