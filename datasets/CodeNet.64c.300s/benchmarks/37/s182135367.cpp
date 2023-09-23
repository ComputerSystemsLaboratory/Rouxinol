#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sum=0;
  int count;
  while(1){
    count=0;
    cin>>n;
    if(n==0) break;
    for(int i=1;i<n-1;i++){
      sum=0;
      for(int j=0;j<n;j++){
	sum+=(i+j);
	if(sum>n) break;
	if(sum==n) count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}


