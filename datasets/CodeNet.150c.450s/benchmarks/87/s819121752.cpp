#include <bits/stdc++.h>
using namespace std;

int main() {
    int H;
    while(true) {
        scanf("%d", &H);
        if(H == 0) break;
        int p[10][5];
        for(int i = H - 1; i >= 0; --i) {
            for(int j = 0; j < 5; ++j) {
                scanf("%d", &p[i][j]);
            }
        }
        bool updated;
        int point = 0;
        while(true) {
            updated = false;
            for(int i = 0; i < H; ++i) {
                for(int j = 0; j < 5; ++j) {
                    if(p[i][j] == 0) continue;
                    int d = 1;
                    while(j + d < 5) {
                        if(p[i][j] != p[i][j + d]) break;
                        ++d;
                    }
                    if(d >= 3) {
                        updated = true;
                        point += d * p[i][j];
                        fill(p[i] + j, p[i] + j + d, 0);
                    }
                }
            }
            if(!updated) break;
            for(int _ = 0; _ < 5; ++_) {
                for(int i = 0; i < H - 1; ++i) {
                    for(int j = 0; j < 5; ++j) {
                        if(p[i][j] == 0) {
                            swap(p[i][j], p[i + 1][j]);
                        }
                    }
                }
            }
        }
        printf("%d\n", point);
    }
    return 0;
}