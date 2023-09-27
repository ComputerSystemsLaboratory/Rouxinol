#include <iostream>
using namespace std;

#define L(X) ((X)*2)
#define R(X) ((X)*2+1)
#define P(X) ((X)/2)

int main(void){
  int h[300];
  int n;
  
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> h[i+1];
  }
  for (int i=1; i<=n; i++){
    cout << "node " << i << ": ";
    cout << "key = " << h[i] << ", ";
    if (P(i)>=1) cout << "parent key = " << h[P(i)] << ", ";
    if (L(i)<=n) cout << "left key = " << h[L(i)] << ", ";
    if (R(i)<=n) cout << "right key = " << h[R(i)] << ", ";
    cout << endl;
  }
  return 0;
}
