#include <iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)
#define MAX_N 100000
#define MAX_W 10000
typedef long long ll;

int N, K;
ll T[MAX_N];

bool isCarryAble(ll P) {
    int able_num = 0;
    rep(i, K) {
        ll sum = 0;
        while(sum + T[able_num] <= P) {
            sum += T[able_num];
            ++able_num;
            if(able_num == N) return true;
        }
    }
    return false;
}

int solveP() {
    ll left  = 0;
    ll right = MAX_N * MAX_W;
    ll mid;
    while(right - left > 1) {
        mid = (left + right) / 2;
        if(isCarryAble(mid)) right = mid;
        else                 left  = mid;
    }
    return right;
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> K;
    rep(i, N) cin >> T[i];

    cout << solveP() << "\n";

    return 0;
}
