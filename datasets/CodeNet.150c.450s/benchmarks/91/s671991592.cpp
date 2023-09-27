#include <iostream>
#define N 1000000
using namespace std;

int main(){
  int n;
  bool prime[N];
  for(int i=0;i<N;i++) prime[i]=true;
  prime[0]=prime[1]=false;
  for(int i=0;i<N/2;i++){
    if(!prime[i]) continue;
    for(int j=i+i;j<N;j+=i) prime[j]=false;
  }
  while(cin>>n){
    int ans=0;
    for(int i=0;i<=n;i++)
      if(prime[i]) ans++;
    cout<<ans<<endl;
  }
  return 0;
}