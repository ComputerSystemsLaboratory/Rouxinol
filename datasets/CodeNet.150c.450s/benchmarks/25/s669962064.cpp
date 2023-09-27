#include <stdio.h>
int main(){
    int a[26]={0};
    char temp;
    while(scanf("%c",&temp)!=EOF){
        if(temp-'a'>=0&&temp-'a'<26)a[temp-'a']++;
        if(temp-'A'>=0&&temp-'A'<26)a[temp-'A']++;
     }
    for(int i=0;i<26;i++){
        printf("%c : %d\n",i+'a',a[i]);
    }
}