#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int n=0,i,cnt[100]={0},j=0,max=0,longer=0,cou[100]={0};
    char str,save[100][100];
    while(1){
        scanf("%c",&str);
        if(str=='\n') break;
        if(str!=' '){
            if(isupper(str)) {
                str = tolower(str);
            }
            save[j][n]=str;
            n++;
            cou[j]++;
        }else{
            for(i=0;i<j;i++){
                if(!strcmp(save[i],save[j])){
                    cnt[i]++;
                }
            }
            j++;
            n = 0;
        }
    }
    for(i=0;i<=j;i++){
        if(cnt[max]<=cnt[i]) max=i;
    }
    for(i=1;i<=j+1;i++){
        if(cou[longer]<=cou[i]){
            longer=i;
        }
    }
    printf("%s %s\n",save[max],save[longer]);

    return 0;
}