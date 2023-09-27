#include <iostream>
using namespace std;

int task(int n){
  int sum=0;
  if(n>36) return 0; if(n==36) return 1;

  for(int a=0;a<10;a++){
    if(n>(a+9+9+9)) continue;
    for(int b=0;b<10;b++){
      if(n>(a+b+9+9)) continue;
      for(int c=0;c<10;c++){
        if(n>(a+b+c+9))continue;
        for(int d=0;d<10;d++){
          if(n==(a+b+c+d)) sum++;
        }
      }
    }
  }
  return sum;
}

int main(){
  int n;
  while(cin>>n){
    int sum=0;
    sum=task(n);
    cout<<sum<<"\n";
  }
}


