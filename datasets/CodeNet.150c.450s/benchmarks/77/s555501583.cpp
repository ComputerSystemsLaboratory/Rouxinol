#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

bool d[100][100];
int rx = 10,ry = 10;

int main(){
    int N,M;
    int X,Y,l[100];
    char dir[100];
    while(true) {
        cin >> N;
        if (N == 0) break;
        rx = 10,ry = 10;
        memset(d,false,sizeof(d));
        rep(i,N) cin >> X >> Y, d[20 - Y][X] = true;
        cin >> M;
        rep(i,M) cin >> dir[i] >> l[i];
        rep(i,M){
            switch (dir[i]) {
            case 'N':
                rep(j,l[i]){
                    ry--;
                    d[ry][rx] = false;
                }
                break;
            case 'S':
                rep(j,l[i]){
                    ry++;
                    d[ry][rx] = false;
                }
                break;
            case 'W':
                rep(j,l[i]){
                    rx--;
                    d[ry][rx] = false;
                }
                break;
            case 'E':
                rep(j,l[i]){
                    rx++;
                    d[ry][rx] = false;
                }
                break;
            }
        }

        string ans = "Yes";
        rep(y,21) {
            rep(x,21) {
                // cout << d[y][x] << " ";
                if(d[y][x] == true) ans = "No";
            }
            // cout << endl;
        }
        cout << ans << endl;
    }

    return 0;
}

