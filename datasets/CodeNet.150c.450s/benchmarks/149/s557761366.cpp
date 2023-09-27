#include <stdio.h>
int max(int n,int m){
    if(n>m)return n;
    else return m;
}
int min(int n,int m){
    if(n<m)return n;
    else return m;
}
int main(){
    int n,m,temp,x,y,a[10000],tx,ty;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)a[i]=i;
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&temp,&x,&y);
        if(temp==1){
            if(a[x]==a[y])printf("1\n");
            else printf("0\n");
        }
        else{
            tx=a[x];
            ty=a[y];
            for(int i=0;i<n;i++)if(a[i]==tx||a[i]==ty)a[i]=min(tx,ty);
        }
    }
}