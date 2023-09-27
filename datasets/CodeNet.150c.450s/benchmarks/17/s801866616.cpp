#include<iostream>

using namespace std;

int main(){
  int a[5],b[5];
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];

  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      if(a[i]<a[j]){
	swap(a[i],a[j]);
      }
    }
  }
  for(int i=0;i<4;i++)
    cout<<a[i]<<' ';
  cout<<a[4]<<"\n";
}