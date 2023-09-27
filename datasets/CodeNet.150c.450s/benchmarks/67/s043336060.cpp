#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define ll long long

using namespace std;

signed main(){
    while(true){
        int n;
        cin >> n;
        if(n == 0)break;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int cnt = 1;
            int temp = i;
            for(int j = 1; temp < n; j++){
                temp += i+j;
                cnt++;
            }
            if(temp == n && cnt != 1)ans++;
        }
        cout << ans << endl;
    }

    return 0;
}


