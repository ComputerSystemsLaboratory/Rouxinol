#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <string>
#include <queue>

#define rep(i, n) for(int i = 0; i < n; i++)
#define INF (1<<30)

typedef long long ll;

using namespace std;

void solve(){
    int n;
    int taro = 0, hanako = 0;
    string x, y;

    cin >> n;
    rep(i, n){
        cin >> x >> y;
        if(x < y){
            hanako += 3;
        }else if(x == y){
            hanako++;
            taro++;
        }else{
            taro += 3;
        }
    }
    cout << taro << " " << hanako << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
