#include<bits/stdc++.h>
using namespace std;
int main(){
  int n[28],count[30]={0};
  int p[2],r=0,i,j;
  for(int i=0;i<28;i++){
    cin>>n[i];
  }
  for(int i=1;i<=30;i++){
    for(int j=0;j<28;j++){
	  if(n[j]==i){
	    count[i]++;
	    break;
	  }
    }
    if(count[i]==0){
      p[r]=i;
      r++;
  }
  }
  for(i=0;i<2;i++){
    cout<<p[i]<<endl;
  }
  return 0;
}