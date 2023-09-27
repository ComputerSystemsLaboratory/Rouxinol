#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n+1];
  for (int i=1;i<=n;i++){
    a[i]=0;
  }
  for (int x=1;x<=sqrt(n);x++){
    for (int y=1;y<=sqrt(n);y++){
      for (int z=1;z<=sqrt(n);z++){
        int ans;
        ans=x*x+y*y+z*z+x*y+y*z+z*x;
        if (ans<=n) a[ans]++;
      }
    }
  }
  for (int i=1;i<=n;i++){
    cout<<a[i]<<endl;
  }
  return 0;
}