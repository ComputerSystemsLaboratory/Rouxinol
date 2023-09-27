#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int x,n[10000],d,s=0;
  cin >> x;
  for(int i=0;i<x;i++) cin >> n[i];
    
  for(int i=0;i<x;i++){
	  d=1;
	  for(int j=2;j*j<=n[i];j++){
		  if(n[i]%j==0){
			  d=0;
			  break;
		  }
	  }
	  if(d==1) s++;
  }
  cout << s << "\n";
  return 0;
}