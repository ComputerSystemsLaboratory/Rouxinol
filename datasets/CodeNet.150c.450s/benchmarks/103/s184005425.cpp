#include <iostream>
#include <cstdio>
using namespace std;
int n, ans;

//選択しきっていないのに答え以上か、繰り返し初期値が９を超えているなら
bool isIllegal(int pos, int sum, int before) {
    return(sum > ans || before > 9);
}
//深さ優先探索
int dfs(int pos, int sum, int before) {
    int ret = 0;
    if(pos == n) {
        if(sum == ans) return(1);
        else           return(0);
    }
    if(isIllegal(pos, sum, before)) return(0);
    for(int r = before; r <= 9; r++) {
        ret += dfs(pos + 1, sum + r, r + 1);
    }
    return(ret);
}

int main(void) {
    while(cin >> n >> ans, n + ans != 0) {
        cout << dfs(0, 0, 0) << endl;
    }
    return(0);
}