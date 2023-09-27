#include <stdio.h>
int main(){
    char p[100],x[1000];
    int temp=0,now=0,ans=0;
    bool f;
    for(int i=0;i<100;i++)p[i]='\0';
    scanf("%s",p);
    while(p[temp]!='\0'){
        if(p[temp]-'A'>=0&&p[temp]-'A'<26)p[temp]+=32;
        temp++;
    }
    for(int i=0;i<1000;i++)x[i]='\0';
    while(scanf("%s",x)!=EOF){
        now=0;
        while(x[now]!='\0')now++;
        f=(now==temp);
        for(int i=0;i<now&&f;i++){
            if(x[i]-'A'>=0&&x[i]-'A'<26)x[i]+=32;
            if(p[i]!=x[i])f=false;
        }
        if(f)ans++;
        for(int i=0;i<now;i++)x[i]='\0';
    }
    printf("%d\n",ans);
}