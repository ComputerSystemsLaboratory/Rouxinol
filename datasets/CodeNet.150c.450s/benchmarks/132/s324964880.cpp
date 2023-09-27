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


using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define REP(i, n) for(ll i = 0; i < n; i++)







int main(){
    int n, p;
    cin >> n >> p;
    while(n || p){
        ll m = p, idx = 0;
        vector<ll> stone(n);
        for(;;){
            if(m > 0){
                m--;
                stone[idx]++;
            }
            else if(stone[idx] < p){
                m = stone[idx];
                stone[idx] = 0;
            }
            else{
                cout << idx << endl;
                break;
            }
            idx++;
            idx %= n;
        }
        
        cin >> n >> p;
    }
}
