#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[31];
  for(int i=1;i<31;i++)
    a[i]=i;
  vector<int> flag;
  for(int i=0;i<28;i++){
    int n;
    cin>>n;
    flag.push_back(n);
  }
  for(int i=1;i<=30;i++){
    int flag2=0;
    for(int j=0;j<28;j++){
      if(a[i]==flag[j]){
	flag2=1;
	break;
      }
    }
    if(flag2==0)
      cout<<a[i]<<endl;
  }
  return 0;
}