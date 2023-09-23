#include <iostream>

using namespace std;

int f(int x){return x*x;}
int integral(int d){
  int sum=0;
  for(int i=1;i<600/d;i++){
    sum+=f(i*d)*d;
  }
  return sum;
}
int main(){
  int d;
  while(cin>>d){
    cout<<integral(d)<<endl;
  }
}