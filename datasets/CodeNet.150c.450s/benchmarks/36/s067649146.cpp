#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  int d;

  while(cin >>d){
    int sum=0;
  for(int i=1;i<600/d ;i++){
    sum+=(i*d)*(i*d)*d;
  }
  cout <<sum <<endl;
}
}

