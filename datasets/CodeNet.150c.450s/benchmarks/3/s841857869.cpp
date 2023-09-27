#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void replace(string &s) {
    int a, b;
    string p;
    cin >> a >> b >> p;
    string x = s.substr(0, a);
    if (b+1 == s.size()) {
        s = x + p;
    }else {
        string y = s.substr(b+1, s.size()-x.size()-p.size());
        s = x + p + y;
    }
}

string sreverse(string s) {
    string a = "";
    REP(i,s.size()) {
        a += s[s.size()-1-i];
    }
    return a;
}

void reverse(string &s) {
    int a, b;
    cin >> a >> b;
    string x = s.substr(0, a);
    string z = s.substr(a, b+1-a);
    if (b+1 == s.size()) {
        s = x + sreverse(z);
    }else {
        string y = s.substr(b+1, s.size()-x.size()-z.size());
        s = x + sreverse(z) + y;
    }
}

void print(string s) {
    int a, b;
    cin >> a >> b;
    For(i,a,b+1) {
        cout << s[i];
    }
    cout << endl;
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    REP(i,n) {
        string o;
        cin >> o;
        if (o == "replace") replace(s);
        else if (o == "reverse") reverse(s);
        else print(s);
    }
    return 0;
}