#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

int point,a,b;

int main (){
  a=0;
  b=0;
  for(int i=0;i<4;i++){
    scanf("%d",&point);
    a = a + point;
  }

  for(int i=0;i<4;i++){
    scanf("%d",&point);  
    b = b + point;
  }

  if(a>b){
    printf("%d\n",a);
  }
  else{
    printf("%d\n",b);
  }
}