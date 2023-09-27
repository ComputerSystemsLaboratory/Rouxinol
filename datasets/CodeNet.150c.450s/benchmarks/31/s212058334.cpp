#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[200001]={};
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  int max=a[1]-a[0];
  int min=a[0];
  for(int i=1;i<n;i++){
      if(a[i]-min>max)max=a[i]-min;
      if(min>a[i])min=a[i];
  }
  cout<<max<<endl;
  return 0;
}