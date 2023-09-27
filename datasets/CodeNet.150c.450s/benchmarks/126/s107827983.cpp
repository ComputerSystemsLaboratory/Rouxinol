#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
const int INF = 1e8;
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a){
        int n;
        cin >> n;

        long long dp[20][20] = {{0}};
        rep(i,n){
            int x,y;
            cin >> x >> y;
            x--; y--;
            dp[x][y] = -1;
        }

        dp[0][0] = 1;
        rep(i,a){
            rep(j,b){
                if(i == 0 && j == 0) continue;
                if(dp[i][j] == -1) continue;
                long long tmp = 0;
                if(i - 1 >= 0) tmp += (dp[i - 1][j] == -1 ? 0 : dp[i - 1][j]);
                if(j - 1 >= 0) tmp += (dp[i][j - 1] == -1 ? 0 : dp[i][j - 1]);
                dp[i][j] = tmp;
            }
        //rep(i,a){ rep(j,b){ cout << dp[i][j] << ' '; } cout << endl; } cout << endl;
        }
        //cout << endl;
        cout << dp[a - 1][b - 1] << endl;
    }
}