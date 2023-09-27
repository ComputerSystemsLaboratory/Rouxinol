#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

int ctoi(char c) {
    return c - '0';
}

int f(char c) {
    int ret = 0;
    if(c == 'm') ret = 1000;
    if(c == 'c') ret = 100;
    if(c == 'x') ret = 10;
    if(c == 'i') ret = 1;
    return ret;
}

int conv(string s) {
    reverse(ALL(s));
    int n = s.size();
    s += "$";
    
    int ret = 0;
    rep(i,n) {
        if(!isdigit(s[i])) {
            int p = f(s[i]);
            if(isdigit(s[i+1])) ret += p * ctoi(s[i+1]);
            else ret += p * 1;
        }
    }
    return ret;
}


string inv(int n) {
    string ret = "";
    while(n > 0) {
        string t = "";
        if(n >= 1000) {
            int p = n / 1000;
            t += (p!=1 ? to_string(p) : "");
            n -= 1000*p;
            ret += t + "m";
        }
        else if(n >= 100) {
            int p = n / 100;
            t += (p!=1 ? to_string(p) : "");
            n -= 100*p;
            ret += t + "c";
        }
        else if(n >= 10) {
            int p = n / 10;
            t += (p!=1 ? to_string(p) : "");
            n -= 10*p;
            ret += t + "x";
        }
        else if(n >= 1) {
            int p = n / 1;
            t += (p!=1 ? to_string(p) : "");
            n -= p;
            ret += t + "i";
        }
    }

    return ret;
}

int main() {
    int n; cin>>n;
    rep(i,n) {
        string s1, s2;
        cin>>s1>>s2;
        int sum = conv(s1) + conv(s2);
        string ans = inv(sum);
        cout << ans << "\n";
    }
    return 0;
}