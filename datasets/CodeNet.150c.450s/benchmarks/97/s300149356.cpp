#include<bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
  int a[250]={},b[250]={}; //aは上下、bは左右
  int n;
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=1; i<n; i++){
      int x,y;
      cin >> x >> y;
      if(y==0){  //左
	    a[i]=a[x];
	    b[i]=b[x]-1;
	  }
	  if(y==1){  //下
	    a[i]=a[x]-1;
	    b[i]=b[x];
	  }
	  if(y==2){  //右
	    a[i]=a[x];
	    b[i]=b[x]+1;
	  }
	  if(y==3){  //上
	    a[i]=a[x]+1;
	    b[i]=b[x];
	  }
    }
    int amax=0,amin=0,bmax=0,bmin=0;
    loop(i,n){
      amax = max(amax,a[i]);
      amin = min(amin,a[i]);
      bmax = max(bmax,b[i]);
      bmin = min(bmin,b[i]);
    }
    amax-=amin;
    amax++;
    bmax-=bmin;
    bmax++;
    cout << bmax << " " << amax << endl;
    }  
  return 0;
}
