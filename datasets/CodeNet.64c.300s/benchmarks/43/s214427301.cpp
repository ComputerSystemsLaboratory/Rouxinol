#include<bits/stdc++.h>
using namespace std;
int main(){
  int A[10],a,b;
  for(int i=0;i<=8;i++){
    cin>>A[i];
  }
  a=A[0]+A[1]+A[2]+A[3];
  b=A[4]+A[5]+A[6]+A[7];
  if(a>=b)cout<<a<<endl;
  else cout<<b<<endl;

 return 0;
}