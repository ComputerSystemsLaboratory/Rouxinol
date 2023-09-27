#include <stdio.h>
int m[51][51]={};
void dfs(int i,int j){
 m[i][j]=1;
 if(m[i+1][j]==2)dfs(i+1,j);
 if(m[i+1][j+1]==2)dfs(i+1,j+1);
 if(m[i][j+1]==2)dfs(i,j+1);
 if(m[i-1][j+1]==2)dfs(i-1,j+1);
 if(m[i-1][j]==2)dfs(i-1,j);
 if(m[i-1][j-1]==2)dfs(i-1,j-1);
 if(m[i][j-1]==2)dfs(i,j-1);
 if(m[i+1][j-1]==2)dfs(i+1,j-1);
}

int main(){
  int cou,i,j,y,t,a;
 while(1){
   cou=0;
   scanf("%d %d",&y,&t);
   if(y==0&&t==0)break;
   for(i=1;i<=t;i++){
     for(j=1;j<=y;j++){
	scanf("%d",&a);
	a++;
	m[i][j]=a;
     }
   }
   for(i=1;i<=t;i++){
     for(j=1;j<=y;j++){
	if(m[i][j]==2){
	  cou++;
	  dfs(i,j);
	}
     }
   }
   printf("%d\n",cou);
 }
 return 0;
}