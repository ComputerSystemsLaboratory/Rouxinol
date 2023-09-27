#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

bool contains(string s, string t) {
    int n = s.size()/2;
    REP(i,n) {
        string ss = s.substr(i,t.size());
        if (ss == t) return true;
    }
    return false;
}

bool iscyclic(string s, string t) {
    if (contains(s, t)) return true;
    else return false;
}

int main() {
    string s, t;
    cin >> s >> t;
    s += s;
    if (iscyclic(s, t)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}