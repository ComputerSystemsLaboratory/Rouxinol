#include<iostream>
using namespace std;
int main(){
  int a[31];
  int d;
  //while(cin>>d){
    for(int i = 0 ; i <= 30 ; i++ ) a[i] = 0;
    for(int i = 0 ; i < 28 ; i++ ){
      cin>>d;
      a[d] = 1;
      //if(i!=27)cin>>d;
    }
    for(int i = 1 ; i <= 30 ; i++ ){
      if(a[i]==0)cout<<i<<endl;
    }
    //for(int i = 1 ; i <= 30 ; i++) cout<<a[d]<<endl;
  }