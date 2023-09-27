#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n, p;
    int cand[51];
    while(cin >> n >> p && n && p) {
        int now = 0;
        rep(i, 51) cand[i] = 0;
        while(true) {
            if(p == 1) {
                bool end = true;
                rep(i, n) {
                    if(i != now && cand[i] != 0) {
                        end = false;
                        break;
                    }
                }
                if(end) break;
            }
            if(p > 0) {
                cand[now]++;
                p--;
            } else {
                p = cand[now];
                cand[now] = 0;
            }
            now = (now == n-1 ? 0 : now+1);
        }
        cout << now << endl;
    }
}