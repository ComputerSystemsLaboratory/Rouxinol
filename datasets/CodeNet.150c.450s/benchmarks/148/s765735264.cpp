#include <bits/stdc++.h>

char s[10];

int main(){
    int cnt[4] = {};
    int n;
    scanf("%d", &n);
    while (n --){
        scanf("%s", s);
        cnt[0] += !strcmp(s, "AC");
        cnt[1] += !strcmp(s, "WA");
        cnt[2] += !strcmp(s, "TLE");
        cnt[3] += !strcmp(s, "RE");
    }
    printf("AC x %d\n", cnt[0]);
    printf("WA x %d\n", cnt[1]);
    printf("TLE x %d\n", cnt[2]);
    printf("RE x %d\n", cnt[3]);
    return 0;
}