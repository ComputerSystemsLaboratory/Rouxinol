#include <bits/stdc++.h>

using namespace std;

int n, m;
int c[21];
int memo[21][50001];

int solve(int id, int money){

    if(memo[id][money] != -1) return memo[id][money];

    int ret;

    if(id == m) ret = 1 << 30;
    else if(money == 0) ret = 0;
    else if(money < c[id]) ret = solve(id + 1, money);
    else ret = min(min(solve(id + 1, money), solve(id + 1, money - c[id]) + 1), solve(id, money - c[id]) + 1);

    return memo[id][money] = ret;

}

int main(){

    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        cin >> c[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << solve(0, n) << endl;

}