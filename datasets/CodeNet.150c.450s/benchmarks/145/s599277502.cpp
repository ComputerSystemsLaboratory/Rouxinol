#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
// #define first first
// #define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;

signed main(){
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss;
    ss << s;
    string t;
    int l = 0;
    string lw;
    while(ss >> t){
        mp[t]++;
        if(t.size() > l){
            l = t.size(); lw = t;
        }
    }
    int MAX = 0;
    string ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(MAX < it -> second){
            MAX = it -> second;
            ans = it -> first;
        }
    }
    cout << ans << " " << lw << endl;
}