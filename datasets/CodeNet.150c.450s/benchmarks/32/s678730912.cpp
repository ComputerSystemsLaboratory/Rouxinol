#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,x[200];
  while(1){
    cin>>n>>a>>b;
    if(n==0 && a==0 && b==0) break;
    for(int i =0;i<n;i++){
      cin>>x[i];
    }
    int j=0,k=a;
    for(int i=a-1;i<b;i++){
      if(x[i]-x[i+1]>=j){
	j=x[i]-x[i+1];
	k=i+1;
      }
    }
    cout<<k<<endl;
  }
  return 0;
}

