#include <iostream>
using namespace std;


int main(){

  while(1){
    int n, x; cin >> n >> x;
    if(n==0)break;
    int ans=0;
    for(int i=1; i<=n; i++)
      for(int j=i+1; j<=n; j++)
	//	for(int k=j+1; k<=n; k++)
	//if(i+j+k==x) ans++;
	if(x-i-j > j && x-i-j <= n){
	  ans++;
	  //	  	  cout << i << j << x-i-j <<endl;;
	}
    cout << ans <<endl;
  }
}