#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    vector<int> ans(N+1);
    for(int x = 1; x <= 100; ++x){
        for(int y = 1; y <= 100; ++y){
            for(int z = 1; z <= 100; ++z){
                int value = x*x + y*y + z*z + x*y + y*z + z*x;
                if(value <= N) ans[value]++;
            }
        }
    }
    for(int i = 1; i < ans.size(); ++i) cout << ans[i] << '\n';
    return 0;
}