#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  long long n,i;
  cin>>n;
  cout<<n<<":";
  i=2;
  while(n>1 && i*i<=n){
    if(n%i==0){
      cout<<" "<<i;
      n/=i;
    }
    else i+=1;
  }
  if(n!=1)cout<<" "<<n;
  cout<<endl;
  return 0;
}