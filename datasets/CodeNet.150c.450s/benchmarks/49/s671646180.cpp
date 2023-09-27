#include <iostream>
using namespace std;

int n, sum, l, s;

int main() {
  
  int a;
  while(cin>>n,n) {
    cin>>a;
    sum = a;
    l = a;
    s = a;
    for(int i=1;i<n;i++) {
      cin>>a;
      if(a>l)l=a;
      else if(a<s)s=a;
      sum+=a;
    }
    sum -= l+s;
    sum = sum/(n-2);
    cout<<sum<<endl;
  }
  
  return 0;
}