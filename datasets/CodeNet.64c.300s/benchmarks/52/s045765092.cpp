#include <stdio.h>
bool used[11]={0,0,0,0,0,0,0,0,0,0,0};int mn(int a, int b) {return (a<b)?a:b;}
void dfs(int v, int sz, int &ans, int here) {used[here]=1;if (!v && !sz) ans++;if (v>=0 && sz>0) for (int j=mn(mn(v,9),here);j>=0;j--) if (!used[j]) dfs(v-j,sz-1,ans,j);used[here]=0;}
int main() {int N,M,i;while (1) {scanf("%d %d",&N,&M);if (!N && !M) return 0;i=0;dfs(M,N,i,10);printf("%d\n",i);}}