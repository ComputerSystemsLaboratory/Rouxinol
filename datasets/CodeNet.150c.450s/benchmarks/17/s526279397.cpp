#include <bits/stdc++.h>
#define r(i,n) for(int i;i<n;i++)
using namespace std;
int main(){
  int a[5];
  r(i,5)cin>>a[i];
  sort(a,a+5);
  for(int i=4;i>=0;i--){
    cout<<a[i];
    if(!i)break;
    cout<<' ';
  }
  cout<<endl;
}