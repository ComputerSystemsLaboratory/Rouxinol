#include<iostream>
#include<algorithm>

using namespace std;

int a[10];

int main(){
  for(int i=0;i<10;i++){
    cin>>a[i];
  }
  sort(a,a+10);
  cout<<a[9]<<'\n'<<a[8]<<'\n'<<a[7]<<'\n';
  return 0;
}