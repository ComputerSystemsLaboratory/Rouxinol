#include<bits/stdc++.h>
using namespace std;

int fanc(string s){
    int res = 0;
    int tmp = 0;
    tmp += (int)(s[7] - '0');
    tmp += 10*(int)(s[6] - '0');
    res += tmp;
    tmp = 0;
    tmp += (int)(s[4] - '0');
    tmp += 10*(int)(s[3] - '0');
    res += tmp * 60;
    tmp = 0;
    tmp += (int)(s[1] - '0');
    tmp += 10*(int)(s[0] - '0');
    res += tmp * 3600;
    return res;
}

int main(){

    while(1){
    
        int n; cin >> n;
        if(!n) break;

        int imos[100000] = {};        
        for(int i = 0; i < n; i++){
            string s, t; cin >> s >> t;
            int S = fanc(s);
            int T = fanc(t);        
            imos[T]--;
            imos[S]++;
        }

        for(int i = 1; i < 100000; i++){
            imos[i] += imos[i - 1];
        }

        int ans = 0;
        for(int i = 0; i < 100000; i++){
            ans = max(ans, imos[i]);
        }

        cout << ans << endl;
    }
    return 0;
}
