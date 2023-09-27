#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    string s;
    vector<int> alpha(26,0);
    while (getline(cin, s)) {
        REP(i, s.size()) {
            if (isalpha(s[i])) {
                alpha[tolower(s[i]) - 'a'] += 1;
            }
        }
    }
    
    char n = 'a';
    REP(i,26) {
        cout << (char)(n + i) << " : " << alpha[i] << endl;
    }
    return 0;
}