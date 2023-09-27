#include <stdio.h>

int main() {
    int n, AC = 0, WA = 0, TLE = 0, RE = 0;
    scanf("%d", &n);
    while (n--) {
        char str[4];
        scanf("%s", str);
        if (str[0] == 'A') {
            AC++;
        }
        else if (str[0] == 'W') {
            WA++;
        }
        else if (str[0] == 'T') {
            TLE++;
        }
        else {
            RE++;
        }
    }
    printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", AC, WA, TLE, RE);
    return 0;
}
