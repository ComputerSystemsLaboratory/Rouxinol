#include <stdio.h>
#include <string.h>
#define MAX 201
int main(void)
{
    char n[MAX], nn[MAX]; 
    int m, h, i, j;
    int len;
    while(scanf("%s", n), n[0] != '-'){
        len = strlen(n);
        scanf("%d", &m);
        for(i=0; i<m; i++){
            scanf("%d", &h);
            for(j=0; j<len-h; j++){
                nn[j] = n[h+j];
            }
            for(j=len-h; j<len; j++){
                nn[j] = n[j-(len-h)];
            }
            for(j=0; j<len; j++){
                n[j] = nn[j];
            }
        }
        printf("%s\n", n);
    }
    return 0;
}