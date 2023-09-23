#include <iostream>

using namespace std;

int main(){
  int n;
  long int maxv=-10e9, minv=10e9, R[200000];
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> R[i];
  }
  
  for(int i = 0; i < n ; i++){
    maxv = max(maxv, R[i]-minv);
    minv = min(minv, R[i]);
  }

  cout << maxv << endl;
  return 0;
}

