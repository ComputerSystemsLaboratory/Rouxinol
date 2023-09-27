#include<stdio.h>

int n;
int data[4][14];//S,H,C,D
char str[10]="SHCD";

void proc(){
  for(int i=0;i<4;i++){
    char c=str[i];
    for(int j=1;j<=13;j++){
      if(!data[i][j])
        printf("%c %d\n",c,j);
    }
  }
}

void inp(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    char tmp[10];int x;
    scanf("%s%d",tmp,&x);
    for(int j=0;j<4;j++){
      if(str[j]==tmp[0]){
        data[j][x]=1;
        break;
      }
    }
  }
}

int main(){
  inp();
  proc();
  return 0;
}