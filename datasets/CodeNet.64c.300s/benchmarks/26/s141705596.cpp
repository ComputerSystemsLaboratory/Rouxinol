#include<iostream>
using namespace std;
#define P 1000000007
int main(){
  unsigned long long a,b,s,l=1;
  cin>>b>>a;s=b;
  while(a!=1){
    if(a%2){
      l=l*s%P;
    }
    s=s*s%P;
    a/=2;
  }
  s=l*s%P;
  cout<<s<<endl;
}