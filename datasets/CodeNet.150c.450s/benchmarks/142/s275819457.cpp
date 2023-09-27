#include <iostream>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  long long a[n];
  for (int i=1;i<=n;i++){
    cin>>a[i];
  }
  for (int i=k+1;i<=n;i++){
    if (a[i-k]<a[i]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}