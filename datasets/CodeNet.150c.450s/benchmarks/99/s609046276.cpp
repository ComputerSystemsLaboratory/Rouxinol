#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) REP(i, 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

bool isnum(char c) {
    return (c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9');
}

int ctoi(char c) {
    switch(c) {
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
    return -1;
}

int encode(string s) {
    int ret = 0;
    rep(i, s.size()) {
        int tmp = ctoi(s[i]);
        if(tmp>0) {
            if(s[i+1]=='m') ret += tmp * 1000;
            else if(s[i+1]=='c') ret += tmp * 100;
            else if(s[i+1]=='x') ret += tmp * 10;
            else if(s[i+1]=='i') ret += tmp;
            i++;
        } else {
            if(s[i]=='m') ret += 1000;
            else if(s[i]=='c') ret += 100;
            else if(s[i]=='x') ret += 10;
            else if(s[i]=='i') ret += 1;
        }
    }
    return ret;
}

string decode(int x) {
    string ret = "";
    string s = to_string(x);
    char symbol[] = "ixcm";
    for(int i=s.size()-1, j=0; i>=0; i--, j++) {
        if(s[i] != '0') {
            ret = symbol[j] + ret;
            if(s[i] != '1') ret = s[i] + ret;
        }
    }
    return ret;
}

int main() {
    int N; cin >> N;
    rep(i, N) {
        string s, t; cin >> s >> t;
        cout << decode(encode(s) + encode(t)) << endl;
    }
}

