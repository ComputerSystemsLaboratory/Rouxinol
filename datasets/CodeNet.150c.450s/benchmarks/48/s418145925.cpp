#include <bits/stdc++.h>
#define inf 99999999
using namespace std;

int e,m;

int main(){
  int i,j,k,max;
  bool ch=0;
  while(1){
    cin >> e;
    if(e==0)break;
    m = inf;
    ch=0;
    max = sqrt(e);
    for(i=max;i>=0;i--)for(j=max;j>=0;j--)if(!ch){
	  int x = i*i*i+j*j;
	  if(x<=e){
	    if(i+j+e-x<m)m = i+j+e-x;
	  }
	}
    cout << m << endl;
  }
  return 0;
}

