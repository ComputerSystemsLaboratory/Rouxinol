#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 1e9;
        for(int i = 0; i < n - 1; i++){
            ans = min(ans, abs(v[i] - v[i + 1]));
        }
        cout << ans << endl;
    }

}