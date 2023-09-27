#include<iostream>
using namespace std;
int main(){
  int n,i,a,b,c,aa,bb,cc;
  cin>>n;
  for(i=0;i<n;i++){
    cin >>a>>b>>c;
    aa=a*a;bb=b*b;cc=c*c;
    if(aa+bb==cc || bb+cc==aa || cc+aa==bb)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}