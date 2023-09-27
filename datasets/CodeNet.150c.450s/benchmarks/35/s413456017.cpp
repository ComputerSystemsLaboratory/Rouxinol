#include <iostream>
#include <algorithm>
using namespace std;

int main (int argc, char const* argv[]){
  int n, max1, a[5001];
  
  while(cin >> n && n!=0){
    for(int i=0;i<n;i++) cin >> a[i];
    
    max1 = a[0];
    for (int i = 0; i < n; i += 1){
      int sum = 0;
      for(int j=i;j<n;j++){
        sum += a[j];
        max1 = max(max1,sum);
      }
    }
    cout << max1 << endl;
    
  }
  
  return 0;
}