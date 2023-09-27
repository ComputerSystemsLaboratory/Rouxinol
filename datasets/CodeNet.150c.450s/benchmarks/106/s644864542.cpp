#include<iostream>
using namespace std;

int main(){
  int a, b, c, i, j, x, num;
  num = 0;
  cin>>a>>b>>c;
  for(i=a; i<=b; i++){
    for(j=1; i*j<c+1; j++){
      x = i * j;
      if (x == c){
        num += 1;
      }
    }
  }
  cout<<num<<endl;
  return 0;
}

