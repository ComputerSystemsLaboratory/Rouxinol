#include <iostream>
using namespace std;

const int C[6] {1, 5, 10, 50, 100, 500,};

int N;
void solve(){
    int ret = 0;
    for(int i = 5; i > -1; --i){
        int t = N/C[i];
        N -= t*C[i];
        ret += t;
    }
    cout << ret << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(1) {
        cin >> N;
        if(N == 0) break;
        N = 1000 - N;
        solve();
    }
    return 0;
}
