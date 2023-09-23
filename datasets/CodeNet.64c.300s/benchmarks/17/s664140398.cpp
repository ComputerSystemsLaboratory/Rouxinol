#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define ll long long

using namespace std;

signed main(){
    while(true){
        int x,y,s;cin >> x >> y >> s;
        if(x == 0)break;
        int ans = 0;
        for(int i = 1; i < s; i++){
            for(int j = i; j < s; j++){
                int sum = (i * (100+x))/100;
                sum += (j*(100+x))/100;
                if(sum == s){
                    ans = max(ans, (i*(100+y))/100 + (j*(100+y))/100);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}


