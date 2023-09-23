#include <iostream>
using namespace std;

int main(){
  int n;
  long int a[5000],sum,ans;

  while(1){
    cin >> n;
    if(n==0) break;
    sum=0;
    ans=-1000000;
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    for(int i=0;i<n;i++){
      sum=0;
      for(int j=0;i+j<n;j++){
	sum+=a[i+j];
	if(ans<sum){
	  ans=sum;
	}
      }
    }
      cout << ans << endl;
  }

}