#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i < (int)(b);++i)


int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<string> s(n);
        int cnt = 0;
        rep(i,n) {
            cin >> s[i];
        }
        int j = 0;
        while((j+1) < n) {
            if (s[j][0] != s[j+1][0]) {
                cnt++;
            }
            j += 2;
        }
        cout <<  cnt <<  endl;
    }
}

