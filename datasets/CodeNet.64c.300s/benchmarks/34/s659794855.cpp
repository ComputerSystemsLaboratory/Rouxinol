#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int num[101];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  for(int i=0;i<n;i++){
    cout<<num[i];
    if(i==n-1)cout<<endl;
    else cout<<" ";
  }
  for(int i=1;i<n;i++){
    int v=num[i];
    int j=i-1;
    while(j>=0 && num[j]>v){
       num[j+1]=num[j];
      j--;
      num[j+1]=v;
    }
    for(int k=0;k<n;k++){
      cout<<num[k];
      if(k==n-1)cout<<endl;
      else cout<<" ";
    }
  }
}