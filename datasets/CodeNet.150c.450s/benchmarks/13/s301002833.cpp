#include<iostream>
using namespace std;
#include<stdio.h>

int main() {
        char p[101], s[101];
        int pl, sl, i, j, r, sum;
        r = 0;
        for (sl = 0; sl < 101; sl++) {
                scanf("%c", &s[sl]);
                if (s[sl] == '\n') break;
        }
        for (pl = 0; pl < 101; pl++) {
                scanf("%c", &p[pl]);
                if (p[pl] == '\n') break;
        }
        for (i = 0; i < sl; i++) {
                for(j = 0; j < pl + 1; j++) {
                        if(s[(i + j) % sl] != p[j]) break;
                        if(j == pl - 1) r = 1;
                }

        }
        if (r == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
}