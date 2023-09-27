#include <stdio.h>

char m[25][25];
int cou;

void dfs(int i,int j){
  //printf("%d %d\n",i,j);///
  m[i][j]='#';
  if(m[i+1][j]=='.'){
    cou++;    
    dfs(i+1,j);
  }
  if(m[i][j+1]=='.'){
    cou++;
    dfs(i,j+1);  
  }
  if(m[i-1][j]=='.'){
    cou++;
    dfs(i-1,j);
  }
  if(m[i][j-1]=='.'){
    cou++;
    dfs(i,j-1);
  }
}

int main(){
  int a,b,i,j;
  char o;
  while(1){
    cou=0;
    scanf("%d %d%c",&a,&b,&o);
    if(a==0&&b==0)break;
    for(i=1;i<b+1;i++){
      for(j=1;j<=a+1;j++){
	scanf("%c",&m[i][j]);
      }
    }
    for(i=1;i<b+1;i++){
      for(j=1;j<=a+1;j++){
	if(m[i][j]=='@')dfs(i,j);
      }
    }
    printf("%d\n",cou+1);
    for(i=1;i<b+1;i++){
      for(j=1;j<=a+1;j++){
	m[i][j]='0';
      }
    }
  }
return 0;
}