#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> ans(10005);
    for(int x = 1; x <= 100; x++) {
        for(int y = 1; y <= 100; y++) {
            for(int z = 1; z <= 100; z++) {
                int d = x*x + y*y + z*z + x*y + y*z + z*x;
                if(d > 10000) continue;
                ans[d]++;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
}