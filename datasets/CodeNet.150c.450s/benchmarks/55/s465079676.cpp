#include <stdio.h>
int main(){
    char x[1001];
    int temp,now;
    for(int i=0;i<1001;i++)
        x[i]='\0';
    while(1){
        scanf("%s",x);
        if(x[0]=='0')return 0;
        temp=now=0;
        while(x[now]!='\0'){
            temp+=x[now]-'0';
            now++;
        }
        for(int i=0;i<now;i++)
            x[i]='\0';
        printf("%d\n",temp);
    }
}