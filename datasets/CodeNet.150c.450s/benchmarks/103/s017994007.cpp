#include <iostream>
using namespace std;
int ans = 0;

int dfs(int depth, int sum, int before) {
    int ret = 0;
    if(depth == 0) {
        if(sum == ans) return(1);
        else           return(0);
    }
    if(sum > ans) return(0);
    if(before > 9) return(0);
    for(int r = before; r <= 9; r++) {
        ret += dfs(depth - 1, sum + r, r + 1);
    }
    return(ret);
}

int main(void) {
    cin.tie();
    ios::sync_with_stdio(false);
    while(true) {
        int depth = -1;
        cin >> depth >> ans;
        if(depth + ans == 0) break;
        cout << dfs(depth, 0, 0) << endl;
    }
    
    return(0);
}