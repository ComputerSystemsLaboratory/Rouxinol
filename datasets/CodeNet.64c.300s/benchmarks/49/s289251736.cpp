#include<iostream>
using namespace std;

int main(){
  int a,b;
  while(cin>>a>>b){
    int sum=a+b;
    int count=0;
    do{
      count++;
      sum*=0.1;
    }while(sum!=0);
      cout<<count<<endl;
  }
  return 0;
}