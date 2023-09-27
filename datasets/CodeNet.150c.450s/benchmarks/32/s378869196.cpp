#include<bits/stdc++.h>
using namespace std;

int main(){
    while (1){
        int n, nmn, nmx;
        cin >> n >> nmn >> nmx;
        if (n == 0) break;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = - 1;
        int tmp = - 1;
        for (int i = nmn - 1; i < nmx; i++){
            if (a[i] - a[i + 1] >= tmp) {
                tmp = a[i] - a[i + 1];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
}
