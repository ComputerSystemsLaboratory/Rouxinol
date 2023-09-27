#include<iostream>
using namespace std;

int main(){

  int x, t[10], cnt=0;

  while(cin>>x){
    if(x==0){
      cnt--;
      cout<<t[cnt]<<endl;
    }else{
      t[cnt]=x;
      cnt++;
    }
  }
  
  return 0;
}