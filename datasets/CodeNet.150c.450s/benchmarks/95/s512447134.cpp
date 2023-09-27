#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,c=0;
  string leg;
  bool ll=false,rl=false,l=false;

  while(true){
    cin>>n;
    if(!n) break;
    c=0;
    l=false;
    ll=false;
    rl=false;
    
    for(int i=0; i<n; ++i){
      cin>>leg;
      if(leg=="lu") ll=true;
      if(leg=="ru") rl=true;
      if(leg=="ld") ll=false;
      if(leg=="rd") rl=false;
      if(l){
	if(!ll){
	  if(!rl){
	    ++c;
	    l=false;
	  }
	}
      }else{
	if(ll){
	  if(rl){
	    ++c;
	    l=true;
	  }
	}
      }
    }

    cout << c << endl;
    
  }
  
  return 0;
}

