#include<iostream>
using namespace std;
int main(){
  int bell,student[100]={0};
  for(int i=0;i<28;i++){
    cin >> bell;
    student[bell]++;
  }
  for(int i=1;i<=30;i++){
    if(student[i]==0){
      cout << i << endl;
    }
  }
  return (0);
}