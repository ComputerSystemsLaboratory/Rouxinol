#include<bits/stdc++.h>
using namespace std;





int main(){
  while(1){
  int n;
  cin>>n;
  if(n==0){break;}
  int sum=0;
  int count=0;
  for(int i=n-1;i>=1;i--){
    sum+=i;
    if(sum%(n-i+1)==0 && i-sum/(n-i+1)>0){count++;}
  }

  cout<<count<<endl;

  }
  return 0;
}

