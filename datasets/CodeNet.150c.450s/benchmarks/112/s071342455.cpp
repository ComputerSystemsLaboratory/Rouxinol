#include <stdio.h>
int main(){
    int n,m;
    char c[2],a[128];
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
    for(int i=0;i<128;i++)a[i]=i;
    for(int i=0;i<n;i++){
        scanf("%s %s",&c[0],&c[1]);
        a[c[0]]=c[1];
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%s",&c[0]);
        printf("%c",a[c[0]]);
    }
        printf("\n");
    }
}