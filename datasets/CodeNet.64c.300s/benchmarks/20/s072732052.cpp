#include<iostream>
using namespace std;

int main(){
  int d;
  while(cin>>d){
    int area=0;
    for(int i=0;i<600;i+=d){
      area += d*i*i;
    }
    cout<<area<<'\n';
  }
  return 0;
}