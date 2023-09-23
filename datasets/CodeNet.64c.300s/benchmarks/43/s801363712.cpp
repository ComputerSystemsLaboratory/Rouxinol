#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int sum1=0,sum2=0;
  int m;
  for(int i=0;i<4;i++){
    cin >> m;
    sum1+=m;
  }
  for(int i=0;i<4;i++){
    cin >> m;
    sum2+=m;
  }
  if(sum1>=sum2){
    cout << sum1 << endl;
  } else{
    cout << sum2 << endl;
  }
  return(0);
}