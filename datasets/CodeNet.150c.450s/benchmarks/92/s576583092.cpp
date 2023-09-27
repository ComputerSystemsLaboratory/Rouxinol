#include<stdio.h>

using namespace std;

int main(){
 int a, b, i;
 while(scanf("%d%d", &a, &b)!=EOF){
  a += b;
  for(i=0;i<201;i++){
   if(a/10==0){
    printf("%d\n", i+1);
    break;
   }
   else{
    a = a/10;
   }
  }
 }

 return 0;
}