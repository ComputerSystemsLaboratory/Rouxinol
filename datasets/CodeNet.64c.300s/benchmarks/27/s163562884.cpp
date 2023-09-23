#include <iostream>
using namespace std;

int main()
{
  while(true){
    int n,x,z;
    cin >> n >> x;
    if(n==0 && x==0) break;
    z=0;
    
    for(int k=1;k<=n;k++){
      for(int l=k+1;l<=n;l++){
	for(int m=l+1;m<=n;m++){
	  if(k+l+m==x && k!=l && l!=m && k!=m){
	    z++;
	  }
	}
      }
    }
    cout << z <<endl;
  }
  return 0;
}