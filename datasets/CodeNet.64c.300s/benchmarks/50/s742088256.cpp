#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int elem[n];
  int cnt=0;
  for(int i=0;i<n;i++){
    cin>>elem[i];
  }
  for(int i=0;i<n-1;++i){
    for(int j=0;j<n-1-i;++j){
      if(elem[j]>elem[j+1]){
	++cnt;
	elem[j]^=elem[j+1];
	elem[j+1]^=elem[j];
	elem[j]^=elem[j+1];
      }
    }
  }
  for(int i=0;i<n;++i){
    cout<<elem[i];
    if(i!=n-1)cout<<" ";
    else cout<<endl;
  }
  cout<<cnt<<endl;
}