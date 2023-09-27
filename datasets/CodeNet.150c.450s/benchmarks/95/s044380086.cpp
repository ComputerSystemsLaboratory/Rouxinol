#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}


int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    string x;
    int count=0,check=0,mode=0;
    lp(i,n){
      cin>>x;
      if(x=="lu"){
	if(check==0) check=1;
	else if(check=2){
	  check=3;
	  if(mode==0){
	    count++;
	    mode=1;
	  }
	}
      }
      if(x=="ru"){
	if(check==0) check=2;
	if(check==1){
	  check=3;
	  if(mode==0){
	    count++;
	    mode=1;
	  }
	}
      }
      if(x=="ld"){
	if(check==3) check=2;
	if(check==1){
	  check=0;
	  if(mode==1){
	    count++;
	    mode=0;
	  }
	}
      }
      if(x=="rd"){
	if(check==3) check=1;
	if(check==2){
	  check=0;
	  if(mode==1){
	    count++;
	    mode=0;
	  }
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}

