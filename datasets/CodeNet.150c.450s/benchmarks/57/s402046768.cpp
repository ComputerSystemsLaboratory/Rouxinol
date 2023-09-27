#include<stdio.h>
#define N 65536

int main(){
  int f,i,j,k,m;
  char l;
  int a[N],b[N],c[N];
  i = 0;
  while(1){
    scanf("%d %c %d", &j,&l,&k);
    if(0<=j && j<=20000 && 0<=k && k<=20000){
      if(l == '?'){
        break;
      }else if(l == '+'){
        a[i] = j+k;
      }else if(l == '-'){
        a[i] = j-k;
      }else if(l  =='*'){
        a[i] = j*k;
      }else if(l == '/'){
        if(k != 0){
          a[i] = j/k;
        }else{
          b[i] = 1;
        }
      }
    }else{
      c[i] = 1;
    }
    i++;
  }
  for(m=0;m<i;m++){
    if(b[m] == 1 || c[m] == 1){
      printf("Error\n");
    }else{
      printf("%d\n",a[m]);
    }
  }
  return 0;
}