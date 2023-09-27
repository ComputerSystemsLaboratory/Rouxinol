#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define all(V) V.begin(), V.end()
#define PB push_back
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    map<string,int> map;
    map["AC"]= 0;
    map["WA"]= 0;
    map["TLE"]= 0;
    map["RE"]= 0;
    rep(i,n){
        string s;
        cin >> s;
        map[s]++;
    }
    cout << "AC " << "x "<< map.at("AC") <<endl;
    cout << "WA " << "x "<< map.at("WA") <<endl;
    cout << "TLE " << "x "<< map.at("TLE") <<endl;
    cout << "RE " << "x "<< map.at("RE") <<endl;
}