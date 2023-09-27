#include <cstdio>
#include <iostream>
using namespace std;
int field[21][21];
int main() {
    int n;
    while (scanf("%d",&n)) {
        if (!n) break;
        for (int i=0; i<21; i++) for (int j=0; j<21; j++) field[i][j]=0;
        for (int i=0; i<n; i++) {
            int x, y; scanf("%d%d",&x,&y);
            field[y][x]=1;
        }
        int m; scanf("%d",&m);
        int rx=10, ry=10;
        int cnt=0;
        for (int i=0; i<m; i++) {
            char d; cin>>d;
            int dist; scanf("%d",&dist);
            if (d=='N') {
                for (int j=0; j<dist; j++) {
                    ry++;
                    if (field[ry][rx]) {
                        field[ry][rx]=0;
                        cnt++;
                    }
                }
            }
            if (d=='E') {
                for (int j=0; j<dist; j++) {
                    rx++;
                    if (field[ry][rx]) {
                        field[ry][rx]=0;
                        cnt++;
                    }
                }
            }
            if (d=='S') {
                for (int j=0; j<dist; j++) {
                    ry--;
                    if (field[ry][rx]) {
                        field[ry][rx]=0;
                        cnt++;
                    }
                }
            }
            if (d=='W') {
                for (int j=0; j<dist; j++) {
                    rx--;
                    if (field[ry][rx]) {
                        field[ry][rx]=0;
                        cnt++;
                    }
                }
            }
        }
        if (cnt!=n) puts("No");
        else puts("Yes");
    }
}