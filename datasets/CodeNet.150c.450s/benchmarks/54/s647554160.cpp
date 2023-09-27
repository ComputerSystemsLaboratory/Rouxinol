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
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string w;
    int cnt = 0;
    while(cin >> w, w != "END_OF_TEXT") {
        transform(w.begin(), w.end(), w.begin(), ::tolower);
        if (s == w) cnt++;
    }
    cout << cnt << endl;
    return 0;
}