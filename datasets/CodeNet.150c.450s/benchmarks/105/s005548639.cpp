#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <cassert>

using namespace std;
typedef long long LL;
template <typename F, typename S> std::ostream& operator<<(ostream& os, const pair<F,S>& p) {
    os << "(" << p.first << "," << p.second << ")"; return os; }
template <typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "["; for(const T& a: v){ os << a << ", "; } os << "]"; return os; }
template <typename K, typename V> ostream& operator<<(ostream& os, const map<K,V>& m) {
    os << "{"; for(const auto& p: m){ os << p.first <<":"<< p.second << ", "; } os << "}"; return os; }

void build(vector<LL>& cand){
    //cerr << "buld.." << endl;
    //cerr << cand << endl;
    for(LL i = 0; i < cand.size(); ++i){
        sort(cand.begin(), cand.end(), greater<LL>());
        for(LL j = 0; j < cand.size(); ++j){
            if(i == j) continue;
            if((cand[i] ^ cand[j]) < cand[j]) cand[j] ^= cand[i];
        }
        //cerr << cand << endl;
    }
}

LL sweepable(LL v, vector<LL>& cand){
    build(cand);
    for(LL v2: cand){
        if((v ^ v2) < v) v ^= v2;
    }
    return v == 0;
}


void solve(){
    LL n;
    cin >> n;
    vector<LL> a(n);
    for(LL i = 0; i < n; ++i){
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<LL> rest;
    for(LL i = 0; i < n; ++i){
        if(s[i] == '0') continue;
        vector<LL> cand;
        for(LL j = i+1; j < n; ++j){
            if(s[j] == '0') cand.push_back(a[j]);
        }
        if(!sweepable(a[i], cand)){
            cout << 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main(){
    LL T;
    cin >> T;
    for(LL t = 0; t < T; ++t){
        solve();
    }
    return 0;
}

