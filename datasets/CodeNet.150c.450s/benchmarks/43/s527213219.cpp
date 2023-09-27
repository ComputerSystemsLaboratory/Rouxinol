#include <iostream>

using namespace std;

int main(){
  int n,l,r,a,b;
  while(cin>>n,n){
    a=b=0;
    while(n--){
      cin>>l>>r;
      if(l==r){
	a+=l;b+=l;
      }
      else (r<l)?a+=l+r:b+=l+r;
    }
    cout<<a<<' '<<b<<endl;
  }
  return 0;
}