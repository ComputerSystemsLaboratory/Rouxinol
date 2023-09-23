#include<iostream>
using namespace std;
int main(){
  bool n[40]={0};
  int in;
  while(cin>>in){
    n[in]=true;
  }
  for(int i=1;i<31;i++){
    if(n[i]!=true)cout<<i<<endl;
  }
}