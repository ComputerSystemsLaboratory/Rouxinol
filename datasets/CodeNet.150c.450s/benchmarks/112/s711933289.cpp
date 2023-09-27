#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve(int N) {
    int M;
    map<char, char> v;
    REP(i, N) {
        char a, b;
        cin >> a >> b;
        v[a] = b;
    }
    cin >> M;
    char s[M];
    REP(i, M) cin >> s[i];
    REP(i, M) {
        if(v.find(s[i]) != v.end()) s[i] = v[s[i]];
    }
    REP(i,M) cout << s[i];
    cout << endl;
}

int main() {
    int N;
    while(cin >> N, N) solve(N);
    return 0;
}