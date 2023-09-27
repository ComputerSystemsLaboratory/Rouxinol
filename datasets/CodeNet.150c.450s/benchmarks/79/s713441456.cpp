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

const ll INF = 1e17;
const ll MOD = 1e9 + 7;

#define REP(i, n) for(int i = 0; i < n; i++)




int main() {
    int n, r;
    cin >> n >> r;
    
    while(n != 0 || r != 0){
        vector<int> k(n);
        REP(i, n){
            k[i] = n - i;
        }
        
        REP(i, r){
            int p, c;
            cin >> p >> c;
            vector<int> t(c);
            REP(j, c){
                t[j] = k[p - 1 + j];
            }
            for(int j = p + c - 2; j >= c; j--){
                k[j] = k[j - c];
            }
            REP(j, c){
                k[j] = t[j];
            }
        }
        
        cout << k[0] << endl;
        
        cin >> n >> r;
    }
}
