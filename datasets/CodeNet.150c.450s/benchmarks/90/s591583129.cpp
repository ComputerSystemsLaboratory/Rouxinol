#include<iostream>
using namespace std;
int main(){
  int num[101]={0};
  int n;
  while(cin>>n){
    num[n]++;
  }
  int max=0;
  for(int i=1;i<=100;i++){
    if(num[i]>max)max=num[i];
  }
  for(int i=1;i<=100;i++){
    if(num[i]==max)cout<<i<<endl;
  }
}