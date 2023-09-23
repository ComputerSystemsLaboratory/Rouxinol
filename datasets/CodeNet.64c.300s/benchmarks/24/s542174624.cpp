#include <iostream>

using namespace std;

int main(){
  int n,l,r,a,b;
  while(cin>>n,n){
    a=b=0;
    while(n--){
      cin>>l>>r;
      if(l>r) a+=l+r;
      else if(r>l) b+=l+r;
      else{
	a+=l;b+=r;
      }
    }
    cout<<a<<' '<<b<<endl;
  }
  return 0;
}