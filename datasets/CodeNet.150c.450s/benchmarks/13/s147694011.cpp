#include <stdio.h>
#include <string.h>

int main(){
    char s[105],p[105];
    int slen,plen;
    int i,j;
    fgets(s,105,stdin);
    fgets(p,105,stdin);
    slen = strlen(s)-1;
    plen = strlen(p)-1;
    for(i=0;i<slen;i++){
        for(j=0;j<plen;j++){
            if(s[(i+j)%slen]!=p[j])break;
        }
        if(j==plen){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}