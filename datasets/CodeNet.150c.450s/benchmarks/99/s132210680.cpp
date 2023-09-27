#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

bool is_d(char c) {
    if('1' <= c && c <= '9') return true;
    return false;
}

int func(string s) {
    int res = 0;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] == 'i') {
            if(i==0) res++;
            else {
                if(is_d(s[i-1])) {
                    res += (s[i-1]-'0');
                    i--;
                }
                else res++;
            }
        }
        if(s[i] == 'x') {
            if(i == 0) res += 10;
            else {
                if(is_d(s[i-1])) {
                    res += (s[i-1]-'0')*10;
                    i--;
                }
                else res += 10;
            }
        }
        if(s[i] == 'c') {
            if(i == 0) res += 100;
            else {
                if(is_d(s[i-1])) {
                    res += (s[i-1]-'0')*100;
                    i--;
                }
                else res += 100;
            }
        }
        if(s[i] == 'm') {
            if(i == 0) res += 1000;
            else {
                if(is_d(s[i-1])) {
                    res += (s[i-1]-'0')*1000;
                    i--;
                }
                else res += 1000;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    string S = "mcxi";

    rep(i,n) {
        string s,s2;
        cin >> s >> s2;

        int res = func(s) + func(s2);
        stringstream ss;
        ss << res;

        string ret = ss.str();
        if(ret.size() == 1) ret = "000" + ret;
        if(ret.size() == 2) ret = "00" + ret;
        if(ret.size() == 3) ret = "0" + ret;

        rep(i,4) {
            if(ret[i] == '0') continue;
            if(ret[i] == '1') cout << S[i];
            else {
                cout << ret[i] << S[i];
            }
        }
        cout << endl;
    }

    return 0;
}