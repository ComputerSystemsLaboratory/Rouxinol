#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    int n;
    while(cin >> n,n) {
        bool d[21][21] = {};
        int x,y;
        rep(i,n){
            cin >> x >> y;
            d[y][x] = true;
        }
        int m;
        cin >> m;
        int nx = 10,ny = 10;
        int cnt = 0;
        rep(i,m){
            char dig;
            int l;
            cin >> dig >> l;
            if(dig == 'N') {
                rep(j,l){
                    ny++;
                    if(d[ny][nx] == true) {
                        cnt++;
                        d[ny][nx] = false;
                    }
                }
            }else if(dig == 'S') {
                rep(j,l){
                    ny--;
                    if(d[ny][nx] == true) {
                        cnt++;
                        d[ny][nx] = false;
                    }
                }
            }else if(dig == 'E') {
                rep(j,l){
                    nx++;
                    if(d[ny][nx] == true) {
                        cnt++;
                        d[ny][nx] = false;
                    }
                }
            }else if(dig == 'W') {
                rep(j,l){
                    nx--;
                    if(d[ny][nx] == true) {
                        cnt++;
                        d[ny][nx] = false;
                    }
                }
            }
        }
        if(cnt == n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}

