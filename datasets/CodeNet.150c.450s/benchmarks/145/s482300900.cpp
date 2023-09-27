#include <stdio.h>
#include <string.h>
 
int main(){
    char str[1000][50], max[50], strtemp[50], mfstr[50];
    int len = 0, len1 = 0, n=0, cnt = 0, mfreq = 0, i = 0, j = 0;

    while(scanf("%s", str[n]) != EOF){
        len = strlen(str[n]);
        if(len1 < len){
            len1 = len;
            strcpy(max, str[n]);
        }
        n++;
    }
    for(i=0; i < n; i++){
        cnt = 0;
        strcpy(strtemp, str[i]);
        for(j=0; j < n; j++){
            if(strcmp(str[j], strtemp) == 0) cnt++;
        }   
        if(mfreq < cnt){
            mfreq = cnt;
            strcpy(mfstr, strtemp);
        }
    }
     
    printf("%s %s\n", mfstr, max);
     
    return 0;
}