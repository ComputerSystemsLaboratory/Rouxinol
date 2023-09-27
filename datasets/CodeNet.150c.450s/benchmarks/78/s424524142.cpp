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
    ll s4[201];
    vector<ll> s4_k;
    REP(i, 201){
        s4[i] = i * (i + 1) * (i + 2) / 6;
        if(s4[i] & 1){
            s4_k.push_back(i * (i + 1) * (i + 2) / 6);
            // cout << s4[i] << endl;
        }
    }
    vector<ll> dp1(1000001, INF), dp2(1000001, INF);
    dp1[0] = 0;
    REP(i, 201){
        REP(j, 1000001){
            if(s4[i] <= j){
                dp1[j] = min(dp1[j], dp1[j - s4[i]] + 1);
            }
        }
    }
    
    dp2[0] = 0;
    REP(i, s4_k.size()){
        REP(j, 1000001){
            if(s4_k[i] <= j){
                dp2[j] = min(dp2[j], dp2[j - s4_k[i]] + 1);
            }
        }
    }
    
    ll n;
    cin >> n;
    
    while(n != 0){
        cout << dp1[n] << ' ' << dp2[n] << endl;
        
        cin >> n;
    }
}

