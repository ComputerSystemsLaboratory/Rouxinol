#include <bits/stdc++.h>
using namespace std;

int a,b,x;

int mySet(int d){
  for(int i=0;i<10;i++){
    if(d<3){
      mySet(d+1);
    }else if(d==3){
      if(a==x){
      b++;
      }
    }
    a++;
  }
  return a=a-10;
}

int main(void){
  while(scanf("%d",&x)!=EOF){
  mySet(0);
  cout<<b<<endl;
  b=0;
  }
  return 0;
}