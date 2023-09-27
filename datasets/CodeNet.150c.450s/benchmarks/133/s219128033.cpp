#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    long long int i, j, k, n, ans=0, po=0, d;
    scanf("%lld", &d);
    long long int c[26], s[d+1][26], t[d+1], l[26];
    for(i=0; i<26; i++) l[i] = 0;
    for(i=0; i<26; i++) scanf("%lld", &c[i]);
    for(i=0; i<d; i++){
        for(j=0; j<26; j++) scanf("%lld", &s[i+1][j]);
    }
    for(i=0; i<d; i++) scanf("%lld", &t[i+1]);
    for(i=0; i<d; i++) t[i+1]--;
    ans = 0;
    for(i=1; i<d+1; i++){
        ans += s[i][t[i]];
        l[t[i]] = 0;
        for(j=0; j<26; j++){
            if(j != t[i]){
                l[j]++;
                ans -= c[j]*l[j];
            }
        }
        printf("%lld\n", ans);
    }

    
}