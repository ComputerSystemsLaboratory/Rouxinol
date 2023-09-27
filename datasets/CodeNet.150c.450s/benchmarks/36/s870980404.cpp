#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
  return n*n;
}

int main(){
  int d;
  while( cin>>d){
    int sum=0;
    for(int i=d;i<600;i+=d){
      sum+=f(i)*d;
    }
    cout<<sum<<endl;
  }
}