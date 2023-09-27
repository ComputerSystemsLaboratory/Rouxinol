#include <bits/stdc++.h>
using namespace std;

int main(){
        int n, i, j;
        while(cin >> n && n != 0){
                int ans = 1e6;
                vector<int> a(n);
                for (i = 0; i < n; i++) cin >> a[i];
                for (i = 0; i < n - 1; i++){
                        for (j = i + 1; j < n; j++){
                                ans =min(ans, abs(a[i] - a[j]));
                        }
                }
                cout << ans << endl;
        }
        return 0;
}

