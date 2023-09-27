#include<stdio.h>
int a[10],b=0,c=0;
bool tube[10];
bool dfs(int i){
    if(i==10) return true;
    bool flagb,flagc;
    if(b>=a[i]&&c>=a[i]) return false;
    if(b<a[i]){
        int oldb=b;
        b=a[i];
        flagb=dfs(i+1);
        b=oldb;
        if(flagb) return true;
    }
    if(c<a[i]){
        int oldc=c;
        c=a[i];
        flagc=dfs(i+1);
        c=oldc;
        if(flagc) return true;
    }
    return flagb||flagc;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            scanf("%d",a+j);
        }
        if(dfs(0)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}