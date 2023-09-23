#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int data[10];
  for(int i=0;i<10;i++){
    cin >>data[i];}
  sort(data,data+10);
  for(int i=9;i>6;i--){
    cout <<data[i]<<endl;}
  return 0;
}