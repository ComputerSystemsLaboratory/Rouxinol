#include<stdio.h>
using namespace std;
//printf("%d %d %.5lf\n",d,r,f);
int main() {
  int i;
  int x=0;
  int y=0;
  int z=0;
 // while(1){
    scanf("%d",&i);
    while(++x <= i){
      z=0;
      y=x;
      if(x%3 == 0){
	printf(" %d",x);
      }else{
	while(y>0){
	  if(y%10 == 3 && z==0) {
	    printf(" %d",x);
	    z=1;
	  }
	  y=y/10;
	}
      }
    }
  printf("\n");
  x=0;
 // }//1
}//main

