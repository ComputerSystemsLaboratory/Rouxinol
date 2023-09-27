#include<stdio.h>
#include<ctype.h>
int main(){
    int i,c;
    int cnt[128]={0};
    while((c=getchar())!=EOF){
        if(isupper(c)){
            c=tolower(c);
        }
        cnt[c]++;
        i++;
    }
    for(i=0;i<26;i++){
        cnt[i+97]+=cnt[i+65];
        printf("%c : %d\n",i+97,cnt[i+97]);
    }
    return 0;
}