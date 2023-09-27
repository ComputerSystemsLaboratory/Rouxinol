#include<stdio.h>
int n,m;
int a[100][100];
int b[100];
int c[100];
void proc(){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      c[i]+=a[i][j]*b[j];
    }
    printf("%d\n",c[i]);
  }
}

void inp(){
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(int j=0;j<m;j++){
    scanf("%d",&b[j]);
  }
}

int main(){
  inp();
  proc();
  return 0;
}