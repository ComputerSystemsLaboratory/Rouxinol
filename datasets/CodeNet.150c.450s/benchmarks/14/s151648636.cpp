#include <stdio.h>

void C(int,int);
void I(int,int,int);
void E(int,int);

void C(int i, int n){
  int x = i;
  if ( x % 3 == 0 ){
    printf(" %d",i);
    E(i,n);
  }
  else{
    I(i,n,x);
  }
}

void I(int i,int n,int x){
  if ( x % 10 == 3 ){
    printf(" %d",i);
    E(i,n);
  }
  else{
      x /= 10;
      if ( x ){
	I(i,n,x);
      }else {
	E(i,n);
      }
  }
}

void E(int i,int n){
  if(++i<=n){
    C(i,n);
  }else{
    printf("\n");
  }
}

int main(){

  int i=1,n;
  scanf("%d",&n);
  C(i,n);


  return 0;
}

