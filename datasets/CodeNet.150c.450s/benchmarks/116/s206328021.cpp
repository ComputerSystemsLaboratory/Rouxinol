#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int n, k; cin >> n >> k;
        if(n == 0) break;

        vector<int> a(n + 1);
        a[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }

        int ans = -1000000000;
        for(int i = 0; i < n - k + 1; i++){
            int tmp = a[i + k] - a[i];
            ans = max(ans, tmp);
        }

        cout << ans << endl;
    }

    return 0;
}
