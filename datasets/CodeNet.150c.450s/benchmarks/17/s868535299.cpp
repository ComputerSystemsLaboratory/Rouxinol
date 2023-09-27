#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a[5];
  for(int i=0;i<5;i++){
    cin>>a[i];
  }
  sort(a,a+5,greater<int>());
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
  
  return 0;
}