#include <bits/stdc++.h>

using namespace std;

int n, s;

int solve(int cnt, int num, int sum) {

    if(cnt == n) {
        if(sum == s) return 1;
        else return 0;
    }

    int ret = 0;
    for(int i = num + 1; i <= 9; ++i) {
        ret += solve(cnt + 1, i, sum + i);
    }
    return ret;

}

int main() {

    while(cin >> n >> s, n || s) {
        cout << solve(0, -1, 0) << endl;
    }

}