#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}

int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    int a[200],b[200];
    lp(i,200){
      a[i]=0;
      b[i]=0;
    }
    for(int i=1;i<n;i++){
      int x,y;
      cin>>x>>y;
      {
	if(y==0){
	  a[i]=a[x];
	  b[i]=b[x]-1;
	}
	if(y==1){
	  a[i]=a[x]-1;
	  b[i]=b[x];
	}
	if(y==2){
	  a[i]=a[x];
	  b[i]=b[x]+1;
	}
	if(y==3){
	  a[i]=a[x]+1;
	  b[i]=b[x];
	}
      }
    }
    int amax=0,amin=0,bmax=0,bmin=0;
    lp(i,n){
      amax=max(amax,a[i]);
      amin=min(amin,a[i]);
      bmax=max(bmax,b[i]);
      bmin=min(bmin,b[i]);
    }
    amax-=amin;
    amax++;
    bmax-=bmin;
    bmax++;
    cout<<bmax<<" "<<amax<<endl;
  }
  return 0;
}

