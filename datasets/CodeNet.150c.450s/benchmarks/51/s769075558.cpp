#include<iostream>

using namespace std;

int main(){
  int data[30];
  int temp;
  for(int i=0;i<28;i++){
    cin >>temp;
    data[temp-1]=-1;
  }
  for(int i=0;i<30;i++){
    if(data[i]!=-1){
      cout << i+1<<endl;
    }
  }
}