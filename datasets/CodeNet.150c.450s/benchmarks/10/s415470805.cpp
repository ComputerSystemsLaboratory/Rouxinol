#include<stdio.h>
int n;
int data[4][3][10];
void proc(){
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<10;k++){
        printf(" %d",data[i][j][k]);
      }
      printf("\n");
    }
    if(i<3)printf("####################\n");
  }
}

void inp(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    --a;--b;--c;d;
    data[a][b][c]+=d;
  }
}

int main(){
  inp();
  proc();
  return 0;
}