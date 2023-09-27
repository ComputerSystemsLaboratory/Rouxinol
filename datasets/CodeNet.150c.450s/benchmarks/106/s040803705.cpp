#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  int tmp=0;
  cin>>a>>b>>c;
  for(int t=a;t<=b;t++){
    if(c%t==0){
      tmp++;
    }
  }
  cout<<tmp<<'\n';
  return 0;
}