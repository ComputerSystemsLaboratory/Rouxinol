#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int getint(char c) {
    if (c == 'A') return 1;
    else if (c == 'C') return 2;
    else if (c == 'G') return 3;
    else return 4;
}

int getint(string s) {
    int j = 1;
    int a = 0;
    REP(i, s.size()) {
        a += j * getint(s[i]);
        j *= 5;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    set<int> st;
    REP(i,n) {
        string s, t;
        cin >> s >> t;
        int h = getint(t);
        if (s[0] == 'i') st.insert(h);
        else {
            if (st.find(h) != st.end()) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    return 0;
}