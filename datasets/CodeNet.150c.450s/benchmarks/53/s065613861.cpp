#include <bits/stdc++.h>
using namespace std;
int main(){
 
  long long a,b;
  cin>>a;
  cout<<a<<':';b=a;
  for(int i=2;i*i<=b;i++){
    while(a%i==0){
      cout<<' '<<i;
      a/=i;
    }
    if(a==1)break;
  }
  if(a!=1)cout<<' '<<a;
  cout<<endl;
}