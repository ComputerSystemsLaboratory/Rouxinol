#include <bits/stdc++.h>

using namespace std;

#define min(a, b) ((a) < (b)? (a):(b))
#define max(a, b) ((a) > (b)? (a):(b))
#define rep(i, n) REP(i, 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

struct rect{
    int h, w, d;
    bool operator<(const rect& r) const {
        return d < r.d || (d == r.d && h < r.h);
    }
    bool operator>(const rect& r) const {
        return d > r.d || (d == r.d && h > r.h);
    }
};

int main() {
    while(true) {
        int h, w; cin >> h >> w;
        if(h == 0 && w == 0) break;
        
        rect r = {h, w, h*h + w*w};
        rect minr = {200, 200, 40000};
        REP(p, 1, 151) {
            REP(q, p+1, 151) {
                rect s = {p, q, p*p+q*q};
                if(s > r) minr = min(minr, s);
            }
        }
        cout << minr.h << " " << minr.w << endl;
    }
}

