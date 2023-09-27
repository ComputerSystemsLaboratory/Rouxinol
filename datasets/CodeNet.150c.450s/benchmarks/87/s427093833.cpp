#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)

int h, in, c, n;
int main(void){
    while(cin >> h) {
        if(h==0) break;
        int ans = 0;
        vector<vector<int> > b;
        rep(i, 0, h) {
            vector<int> r;
            rep(i, 0, 5) {
                cin >> in;
                r.push_back(in);
            }
            b.push_back(r);
        }
        bool combo;
        do {
            combo = false;
            rep(i, 0, h) {
                c = 0;
                n = 0;
                rep(j, 0, 3) {
                    if(b[i][j]!=0 && b[i][j]==b[i][j+1] && b[i][j+1]==b[i][j+2]) {
                        c = b[i][j];
                        n = 3;
                        b[i][j] = b[i][j+1] = b[i][j+2] = 0;
                        rep(k, j+3, 5) {
                            if(b[i][k]==c) {
                                n++;
                                b[i][k] = 0;
                            } else break;
                        }
                    } 
                }
                ans += n * c;
                if(c>0) combo = true;
            }
            if(combo) {
                rep(i, 0, 5) {
                    vector<int> nz;
                    rrep(j, h-1, 0) {
                        if(b[j][i]!=0) nz.push_back(b[j][i]);
                    }
                    int nzs = nz.size();
                    rrep(j, h-1, 0) {
                        if(nzs>0) {
                            b[j][i] = nz[h-1-j];
                            nzs--;
                        } else b[j][i] = 0;
                    }
                }
            }
        } while(combo);
        cout << ans << endl;
    }
}
