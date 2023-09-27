#include<stdio.h>
#include<string.h>
int main(){
  char m[1000],b[2],g[1000][1000],c[2]="-";
  int n,a,i,j,d,f=0;
  while(1){
    scanf("%s",m);
    if(strcmp(m,c)==0){
      break;
    }
    int e=strlen(m);
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a);
      for(j=0;j<a;j++){
    b[0]=m[0];
    d=1;
    while(d!=e){
      m[d-1]=m[d];
      d++;
    }
    m[e-1]=b[0];
      }
    }
    strcpy(g[f],m);
    f++;
  }
  for(i=0;i<f;i++){
    printf("%s\n",g[i]);
  }
}