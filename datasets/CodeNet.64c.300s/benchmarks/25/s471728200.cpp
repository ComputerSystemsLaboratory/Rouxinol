#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
    int a[4], b[4], i, j, hit, blow;
    while (1) {
        hit = 0;
        blow = 0;
        for (i = 0; i < 4; i++) {
            cin >> a[i];
            if (cin.eof()) {
                goto END;
            }
        }
        for (i = 0; i < 4; i++) {
            cin >> b[i];
        }
        for (i = 0; i < 4; i++) {
            if (a[i] == b[i]) {
                hit++;
            }
        }
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (i != j && a[i] == b[j]) {
                    blow++;
                }
            }
        }
        cout << hit << " " << blow << endl;
    }
    END:
    return 0;
}