#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

typedef vector<int> vi;
typedef unsigned long long ull;
#define rep(i,a) for(int i=0; i<int(a); i++)

int n, s;
int a[200];
ull dp[2][25];

ull solve(){
    memset(dp, 0, sizeof(dp));
    ull *cur = dp[0], *prev = dp[1];
    prev[a[0]] = 1;
    for (int i = 1; i < n; i++){
        memset(cur, 0, sizeof(dp)/2);
        rep(j, 20 + 1){
            int t1 = j + a[i];
            if (0 <= t1 && t1 <= 20){
                cur[t1] += prev[j];
            }
            int t2 = j - a[i];
            if (0 <= t2 && t2 <= 20){
                cur[t2] += prev[j];
            }
        }
        //rep(i, 21) cout << cur[i] << " ";
        //cout << endl;
        swap(cur, prev);
    }

    return prev[s];
}

int main(){
    while (cin >> n){
        n--;
        rep(i, n) cin >> a[i];
        cin >> s;
        cout << solve() << endl;
    }
}