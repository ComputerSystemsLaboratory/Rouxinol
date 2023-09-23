#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,tmp;
  cin>>n;
  int elem[n];
  int cnt=0;
  //入力
  for(int i=0;i<n;i++){
    cin>>elem[i];
  }

  for(int i=0;i<n; ++i){
    int temp=i;
    for(int j=i;j<n;++j){
      if(elem[j]<elem[temp])temp=j;
    }
    if(i!=temp){
    cnt++;
    tmp=elem[i];
    elem[i]=elem[temp];
    elem[temp]=tmp;
    }
  }
  for(int i=0;i<n;i++){
    cout<<elem[i];
    if(i!=n-1)cout<<" ";
    else cout<<endl;
  }
  cout<<cnt<<endl;
}