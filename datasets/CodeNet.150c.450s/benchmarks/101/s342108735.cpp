#include <stdio.h>
int ancestor[100000];
int find(int x){
    if(ancestor[x]==x)return x;
    return ancestor[x]=find(ancestor[x]);
}
int min(int a,int b){
    if(a<b)return a;
    return b;
}
int max(int a,int b){
    if(a>b)return a;
    return b;
}
int main(){
    int n,q,m,temp,x,y;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)ancestor[i]=i;
    for(int i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        temp=find(x);
        q=find(y);
        ancestor[max(temp,q)]=min(temp,q);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d%d",&x,&y);
        if(find(x)!=find(y))printf("no\n");
        else printf("yes\n");
    }
}