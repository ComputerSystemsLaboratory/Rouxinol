#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int a[4], b[4];

int main(void) {
    while(~scanf("%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &b[0], &b[1], &b[2], &b[3])) {
        int hit = 0, blow = 0;
        for(int i = 0; i < 4; i++) {
            if(a[i] == b[i]) {
                hit += 1;
            } else if(count(a, a + 4, b[i]) > 0) {
                blow += 1;
            }
        }
        printf("%d %d\n", hit, blow);
    }
    return 0;
}