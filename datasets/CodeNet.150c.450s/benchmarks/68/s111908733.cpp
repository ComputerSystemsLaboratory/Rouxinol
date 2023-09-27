#include<bits/stdc++.h>
using namespace std;





int main(){
  while(1){
    
  int n;
  cin>>n;
  if(n==0){break;}
  int a[10000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int mi=2000000000;
  sort(a,a+n);
  for(int i=1;i<n;i++){
    mi=min(a[i]-a[i-1],mi);
  }
  cout<<mi<<endl;
  }
  
  return 0;
}

