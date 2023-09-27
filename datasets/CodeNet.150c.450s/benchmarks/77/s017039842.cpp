#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        bool f[25][25];
        memset(f,0,sizeof(f));

        rep(i,n) {
            int x,y;
            cin >> x >> y;
            f[y][x] = true;
        }

        int m;
        cin >> m;

        int y = 10,x = 10;

        rep(i,m) {
            string s;
            cin >> s;

            int len;
            cin >> len;

            if(s == "N") {
                REP(j,1,len+1) {
                    if(f[y+j][x]) f[y+j][x] = false;
                }

                y += len;
            }
            else if(s == "E") {
                REP(j,1,len+1) {
                    if(f[y][x+j]) f[y][x+j] = false;
                }

                x += len;
            }
            else if(s == "S") {
                REP(j,1,len+1) {
                    if(f[y-j][x]) f[y-j][x] = false;
                }

                y -= len;
            }
            else if(s == "W") {
                REP(j,1,len+1) {
                    if(f[y][x-j]) f[y][x-j] = false;
                }

                x -= len;
            }
        }

        bool flag = true;
        rep(i,21) {
            rep(j,21) if(f[i][j]) flag = false;
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}