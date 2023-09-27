#include <bits/stdc++.h>
using namespace std;


void solve(int N) {
    long long ans = 0;
    map<int, int> mp;
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            for (int z = 1; z <= 100; z++) {
                int n = x * x + y * y + z * z + x * y + y * z + z * x;
                mp[n]++;
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << mp[i] << endl;
    }
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    int N;
    scanf("%d",&N);
    solve(N);
    return 0;
}
