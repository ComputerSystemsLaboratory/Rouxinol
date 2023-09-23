#include <iostream>
using namespace std;
 
int main() {
  int i,j,n;
  while(1){
    int ans=0;
    cin>>n;
    if (n==0) break;
    int sum=0;
    i=0;
    while(n>sum){
      i++;
      sum=sum+i;
    }
    sum=1;
    for(j=2;j<=i;j++){
      sum=sum+j;
      if((n-sum)%j==0)ans++;
    }
    cout<<ans<<endl;
  }
}