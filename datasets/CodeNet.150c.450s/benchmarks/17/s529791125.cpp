#include<iostream>
using namespace std;
int main(){
  int num[10],temp;
  for(int i=0;i<5;i++){
    cin>>num[i];
  }
  for(int i=0;i<5;i++){
    for(int j=4;j>i;j--){
      if(num[j]>num[j-1]){
	temp=num[j];
	num[j]=num[j-1];
	num[j-1]=temp;
      }
    }
  }
  for(int i=0;i<5;i++){
    cout<<num[i];
    if(i!=4){
      cout<<" ";
    }
  }
  cout<<endl;
  return 0;
}