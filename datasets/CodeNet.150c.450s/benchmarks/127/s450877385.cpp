#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

string rev_str(string &s, int start, int end) {
    string t;
    for(int i=end-1; i>=start; --i) t += s[i];
    return t;
}

int main(void){
    int m;
    map<string, int> hoge;
    cin >> m;
    rep(loop, m) {
        hoge.clear();
        string org, tmp, tmp2;
        cin >> org;
        hoge[org] = 1;
        int len = org.size();
        for(int i=1; i<len; ++i) {
            hoge[org.substr(0, i)+rev_str(org, i, len)] = 1;
            hoge[rev_str(org, 0, i)+org.substr(i, len-i)] = 1;
            hoge[rev_str(org, 0, i)+rev_str(org, i, len)] = 1;
            hoge[org.substr(i, len-i)+org.substr(0, i)] = 1;
            hoge[org.substr(i, len-i)+rev_str(org, 0, i)] = 1;
            hoge[rev_str(org, i, len)+org.substr(0, i)] = 1;
            hoge[rev_str(org, i, len)+rev_str(org, 0, i)] = 1;
        }
        map<string, int>::iterator it = hoge.begin();
        int ans = 0;
        while(it != hoge.end()) {
            ans += (*it).second;
            it++;
        }
        cout << ans << endl;
    }
}