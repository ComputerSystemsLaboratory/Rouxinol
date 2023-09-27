#include<stdio.h>
#include<stack>
using namespace std;
int tu[1000][1000];
int a[10000];
int an[10000];
int d[10000];
int f[10000];
int shijian,n;
int next(int q){
for(int i=an[q];i<n;i++){
    an[q]=i+1;
    if(tu[q][i])return i;
}
return -1;
}
void sou(int u){
     stack<int > s;
     s.push(u);
     a[u]=2;
     d[u]=++shijian;
     while(!s.empty()){
        int x=s.top();
        int v=next(x);
        if(v!=-1){
            if(a[v]==1){
                a[v]=2;
                d[v]=++shijian;
                s.push(v);
            }
        }
        else {
            s.pop();
            a[x]=3;
            f[x]=++shijian;
        }
     }
}
void shensou(){
     for(int u=0;u<n;u++){
        a[u]=1;
        an[u]=0;
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