#include <stdio.h>
int main(){
    int m,now,temp,tot;
    char a[1001],b[1001];
    for(int i=0;i<1001;i++)b[i]=a[i]='\0';
    while(1){
        scanf("%s",a);
        if(a[0]=='-')return 0;
        now=0;
        while(a[now]!='\0')now++;
        scanf("%d",&m);
        tot=0;
        for(int i=0;i<m;i++){
            scanf("%d",&temp);
            tot+=temp;
        }
        temp=tot%now;
        for(int j=0;j<temp;j++)
            b[j]=a[j];
        for(int j=temp;j<now;j++){
            a[j-temp]=a[j];
        }
        for(int j=0;j<temp;j++){
            a[now-temp+j]=b[j];
        }
        
        for(int i=0;i<now;i++){
            printf("%c",a[i]);
            b[i]=a[i]='\0';
        }
        printf("\n");
    }
}