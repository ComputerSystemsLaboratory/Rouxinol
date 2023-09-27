#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
#include <numeric>
#include <functional>
#include <unordered_map>
#include <bitset>


using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define REP(i, n) for(int i = 0; i < n; i++)




int main() {
    int n;
    cin >> n;
    
    while(n != 0){
        vector<int> imos(1e5);
        REP(i, n){
            int hh, mm, ss;
            
            scanf("%d:%d:%d", &hh, &mm, &ss);
            int t = hh * 3600 + mm * 60 + ss;
            imos[t]++;
            
            scanf("%d:%d:%d", &hh, &mm, &ss);
            t = hh * 3600 + mm * 60 + ss;
            imos[t]--;
        }
        
        int ans = imos[0];
        for(int i = 1; i < 1e5; i++){
            imos[i] += imos[i - 1];
            ans = max(ans, imos[i]);
        }
        cout << ans << endl;
        
        cin >> n;
    }
}

