#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;

const int T = 24 * 60 * 60;
int d[T];

int to_int(string s){
    int res = 0;
    res += ((s[0]-'0')*10 + s[1]-'0') * 3600;
    res += ((s[3]-'0')*10 + s[4]-'0') * 60;
    res += ((s[6]-'0')*10 + s[7]-'0');
    return res;
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int N;
    while(cin>>N, N){
        memset(d, 0, sizeof(d));
        
        while(N--){
            string s, e;
            cin >> s >> e;
            d[to_int(s)]++;
            d[to_int(e)]--;
        }
        for(int i=1; i<T; i++)
            d[i] += d[i-1];
        
        int ans = 0;
        for(int i=0; i<T; i++)
            ans = max(ans, d[i]);
        
        cout << ans << endl;
    }
    
    return 0;
}