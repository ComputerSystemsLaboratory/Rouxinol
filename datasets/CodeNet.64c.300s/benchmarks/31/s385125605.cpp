#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int data[31]={0};
  int m;
  for(int i=0;i<30;i++){
    cin >> m;
    data[m]++;
  }
  for(int i=1;i<31;i++){
    if(data[i]==0){
      cout << i << endl;
    }
  }
  return 0;
}