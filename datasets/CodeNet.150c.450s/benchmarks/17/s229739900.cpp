#include<iostream>
#include<cstdio>

int main(){
  int a,b,c,d,e;
  std::scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  //std::cout << a << b << c << d << e << std::endl;
  int flag = 0,temp;
  do{
    flag = 0;
    if(a<b){
      temp = a;
      a = b;
      b = temp;
      flag = 1;
    }
    if(b<c){
      temp = b;
      b = c;
      c = temp;
      flag = 1;
    }
    if(c<d){
      temp = c;
      c = d;
      d = temp;
      flag = 1;
    }
    if(d<e){
      temp = d;
      d = e;
      e = temp;
      flag = 1;
    }
  }while(flag);
  std::printf("%d %d %d %d %d\n",a,b,c,d,e);
}