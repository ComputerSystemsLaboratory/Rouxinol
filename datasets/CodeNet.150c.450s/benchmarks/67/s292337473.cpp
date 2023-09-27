#include<bits/stdc++.h>

#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}
using namespace std;

int main(){
  while(1){
    int x;
    cin>>x;
    if(x==0) break;
    int ans=0;
    for(int i=2;i<x;i++){
      int a=x;
      if(i%2==1){
	if(a%i==0){
	  a/=i;
	  if(a-((i-1)/2)>0){
	    ans++;
	  }
	}
      }
      else{
	if(a%(i/2)==0){
	  a/=i/2;
	  if(a%2==1) {
	    a/=2;
	    if(a-(i/2-1)>0)
	    ans++;
	  }
	}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

