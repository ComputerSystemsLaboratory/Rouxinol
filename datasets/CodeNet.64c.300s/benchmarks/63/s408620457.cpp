#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int i,a,b,temp,r,lcm;

  while(cin >> a >> b){
    if(a<b){
      temp=a;
      a=b;
      b=temp;
    }

    int x=a,y=b;

    while(b>0){
      r=a%b;
      a=b;
      b=r;
    }

    lcm=x*(y/a);
    printf("%d %d\n",a,lcm);
  }

  return 0;
}