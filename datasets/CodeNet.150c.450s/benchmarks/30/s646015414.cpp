#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ans=0,flag=0;
  int num[101];
  int idx;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  for(int i=0;i<n;i++){
    idx=i;
    for(int j=i+1;j<n;j++){
      if(num[idx]>num[j]){
	flag=1;
	idx=j;
      }
    }
    int temp=num[i];
    num[i]=num[idx];
    num[idx]=temp;
    if(flag)ans++;
    flag=0;
  }
  for(int i=0;i<n;i++){
    cout<<num[i];
    if(i==n-1)cout<<endl;
    else cout<<" ";
  }
  cout<<ans<<endl;
}