#include<iostream>
using namespace std;
int main(){
  int bell,P[39]={0};
  for(int i=0;i<28;i++){
    cin >> bell;
    P[bell]++;
  }
  for(int i=1;i<=30;i++){
    if(P[i]==0){
      cout << i << endl;
    }
  }
}