#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int R[n];
  for(int i=0;i<n;i++){
    cin >> R[i];
  }

  int maxv,minv;
  maxv = -1000000000;
  minv = R[0];
  for(int j=1;j<n;j++){
    maxv = max(maxv,R[j]-minv);
    minv = min(minv,R[j]);
  }
  
  cout << maxv << endl;
  
  return 0;
}