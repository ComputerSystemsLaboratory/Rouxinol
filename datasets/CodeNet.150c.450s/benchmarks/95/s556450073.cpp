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
#include <cstring>
#include <typeinfo>
#include <numeric>
#include <functional>
#include <unordered_map>
#include <bitset>
#include <stack>
#include <assert.h>
#include <unordered_set>
#include <random>



using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define REP(i, n) for(ll i = 0; i < n; i++)












int main(){
    ll n;
    while(cin >> n, n){
        bool l = false, r = false, f = false;
        ll ans = 0;
        REP(i, n){
            string s;
            cin >> s;
            if(s == "lu") l = true;
            if(s == "ru") r = true;
            if(s == "ld") l = false;
            if(s == "rd") r = false;
            if(!f && l && r){
                f = true;
                ans++;
            }
            else if(f && !l && !r){
                f = false;
                ans++;
            }
        }
        cout << ans << endl;
    }
}
