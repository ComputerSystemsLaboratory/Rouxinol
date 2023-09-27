#include<iostream>
using namespace std;

int main(){
  int n,m[200000],max=-1000000000,min;
  cin>>n;
  for(int i=0;i<n;i++) cin>>m[i];
  min=m[0];
  for(int i=1;i<n;i++){
      if(max<m[i]-min) max=m[i]-min;
      if(min>m[i]) min=m[i];
    }
  cout<<max<<endl;
  return 0;
}