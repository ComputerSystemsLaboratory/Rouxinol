#include <bits/stdc++.h>
using namespace std;
int main(){
  long n; cin>>n;
  cout<<n<<':';
  
  long x=n;
  
  while(x%2==0){cout<<' '<<2;x/=2;}
  
  for(int i=3;i*i<=n;i+=2){
    while(x%i==0){
      cout<<' '<<i;
      x/=i;
    }
  }
  if(x!=1)cout<<' '<<x;
  cout<<endl;
}

