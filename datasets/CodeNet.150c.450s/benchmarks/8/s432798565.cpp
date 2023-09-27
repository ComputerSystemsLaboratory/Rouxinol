#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n;
  cin>>n;
  string taro,hana;
  int p_taro=0;
  int p_hana=0;
  for(int i=0;i<n;i++){
    cin>>taro>>hana;
    if(taro>hana){
    p_taro += 3;
    }else if(taro<hana){
    p_hana += 3;
    }else{
    p_taro += 1;
    p_hana += 1;
    }  
  }
  cout<<p_taro<<' '<<p_hana<<endl;
  return 0;
}