#include<stdio.h>
int tu[1000][1000];
int a[10000];
int d[10000];
int f[10000];
int shijian,n;
void sou(int u){
     a[u]=2;
     d[u]=++shijian;
     for(int i=0;i<n;i++){
        if(tu[u][i]==0) continue;
        if(a[i]==1) {
            sou(i);
        }
     }
     a[u]=3;
     f[u]=++shijian;
}
void shensou(){
     for(int u=0;u<n;u++){
        a[u]=1;
     }
     shijian=0;
     for(int u=0;u<n;u++){
        if(a[u]==1)sou(u);
     }
     for(int u=0;u<n;u++){
         printf("%d %d %d\n",u+1,d[u],f[u]);
     }
}


int main(){
   int v;
   int m;
   int x;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d%d",&v,&m);
        v--;
        for(int j=0;j<m;j++){
            scanf("%d",&x);
            x--;
            tu[v][x]=1;
        }
   }
   shensou();
return 0;
}