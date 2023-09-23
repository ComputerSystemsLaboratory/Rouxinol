#include<iostream>
using namespace std;

int main(){
  int i,data[31];
  for(i = 0;i < 31; i++){
    data[i]=0;
  }

  for(int i = 0; i < 28; i++){
    int number;
    cin >> number;
    data[number]=1;
  }

  for(i = 1; i <=30; i++){
    if(data[i]==0)cout << i << endl;
  }
  return 0;
}