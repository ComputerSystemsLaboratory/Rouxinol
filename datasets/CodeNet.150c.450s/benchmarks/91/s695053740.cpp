#include<iostream>
#define Number 1000000
using namespace std;
int main(){
  int n;
  int table[Number]={0};
  for(int i=2;i<Number;i++){
    if(table[i]==0){
      for(int j=2*i;j<Number;j+=i){
	table[j]=1;
      }
    }
    table[i]=(table[i]?0:1)+table[i-1];
  }
  while(cin>>n){
    cout<<table[n]<<endl;
  }
  return 0;
}