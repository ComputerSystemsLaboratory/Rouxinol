#include<iostream>
using namespace std;
int main(){
  int num,mem[31];
  for(int i=1;i<31;i++){
    mem[i]=0;
  }
  for(int i=0;i<28;i++){
    cin >> num;
    mem[num]=1;
  }
  for(int i=1;i<31;i++){
    if(mem[i]==0){
      cout << i << endl;
    }
  }
  return 0;
}