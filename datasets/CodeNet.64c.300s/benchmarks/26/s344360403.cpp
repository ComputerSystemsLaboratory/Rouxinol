#include <iostream>
#define P 1000000007
using namespace std;
typedef long long ll;
int mod_power(ll,int);

int main(){
  int m,n;
  cin>>m>>n;
  cout<<mod_power((ll)m,n)<<endl;
  return 0;
}

int mod_power(ll x,int y){
  ll res=1;
  for(int i=0;i<=30;i++){
    if(y&(1<<i)) res=res*x%P;
    x=x*x%P;
  }
  return res%P;
}