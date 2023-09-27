#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    int n;
    int all = 196470;
    cin >> n;
    rep(i, 0, n){
        int y, m, d;
        cin >> y >> m >> d;
        int cnt = 0;
        rep(i, 1, y + 1){
            rep(j, 1, 11){
                if(i == y && j == m) break;
                if(i % 3 == 0 || j % 2 == 1) cnt += 20;
                else cnt += 19;
            }
        }
        cnt += d - 1;
        cout << all - cnt << endl;
    }
}