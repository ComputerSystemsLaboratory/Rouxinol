#include<iostream>
#include<algorithm>
using namespace std;
int main(){

  int n;
  while(cin >> n&&n!=0){
    int a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++){
      cin >> a[i];
      a[i] += a[i-1];
    }
    int sum = a[1];
    for(int i=0;i<=n;i++){
      for(int j=i+1;j<=n;j++) sum = max(sum,a[j]-a[i]);
    }
    cout << sum << endl;
  }
  
  return (0);
}