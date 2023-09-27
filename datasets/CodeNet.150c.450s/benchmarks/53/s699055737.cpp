#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  double m=sqrt(n);
  cout<<n<<':';
  while(n%2==0) {
    cout<<" "<<2;
    n/=2;
  }
  for(int i=3;i<=m;i+=2){
    while(n%i==0){
      cout<<" "<<i;
      n/=i;
    }
  }
  if(n!=1) cout<<" "<<n;
  cout<<endl;
}





