#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()

using namespace std;

int main(){
    while(true){
        int n; cin >> n;
        if(n == 0)break;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(ALL(a));
        int ans = (int)1e9;
        for(int i = 0; i < n-1; i++){
            ans = min (a[i+1] - a[i], ans);
        }
        cout << ans << endl;
    }

    return 0;
}


