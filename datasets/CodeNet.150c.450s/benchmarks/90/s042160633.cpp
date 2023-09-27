#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  int a[100]={0};
  while(cin>>n) a[n-1]++;
  m = *max_element(a,a+100);
  for(int i=0;i<100;i++){
    if(m==a[i]) cout<<i+1<<endl;
  }
  return 0;
}