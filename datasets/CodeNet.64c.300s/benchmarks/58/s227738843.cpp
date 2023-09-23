#include<bits/stdc++.h>
using namespace std;

int h,w,v[100][100];
char c[100][100];

void dfs(int i,int j, char s) {
    if(c[i][j]!=s||v[i][j]) return;
    v[i][j]=1;
    if(i!=0) dfs(i-1,j,s);
    if(i!=h-1) dfs(i+1,j,s);
    if(j!=0) dfs(i,j-1,s);
    if(j!=w-1) dfs(i,j+1,s);
}

int main(){
    while(~scanf("%d%d",&h,&w)&&h&&w){
        memset(c,0,sizeof(c));
        memset(v,0,sizeof(v));
        for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            scanf(" %c", &c[i][j]);

        int cnt =0;
		for(int i=0;i<h;i++)
        for(int j=0;j<w;j++) {
            if(v[i][j]) continue;
            dfs(i,j,c[i][j]);
            cnt++;
        }
		printf("%d\n",cnt);
    }
    return 0;
}

