#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const double pi = acos(-1);
#define FOR(i,a,b) for (ll i=(a),__last_##i=(b);i<__last_##i;i++)
#define RFOR(i,a,b) for (ll i=(b)-1,__last_##i=(a);i>=__last_##i;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define __GET_MACRO3(_1, _2, _3, NAME, ...) NAME
#define rep(...) __GET_MACRO3(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define rrep(...) __GET_MACRO3(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) {
REP(i,v.size()){if(i)os<<" ";os<<v[i];}return os;}
template<typename T> ostream& operator<<(ostream& os, const vector<vector<T>>& v) {
REP(i,v.size()){if(i)os<<endl;os<<v[i];}return os;}

int main() {
    // Write Your Code Below
    ll n; cin >> n;
    set<string> dic;
    for(int i=0;i<n;i++){
        string str; cin >> str;
        if(str == "insert"){
            string str; cin >> str;
            dic.insert(str);
        }else{
            string str; cin >> str;
            if(dic.find(str)!=dic.end()){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
}

