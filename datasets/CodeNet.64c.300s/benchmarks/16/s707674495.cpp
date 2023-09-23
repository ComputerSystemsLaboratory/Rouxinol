#include <iostream>
//#include

using namespace std;
const int MAX_N = 200000;
int R[MAX_N], n;

int main(){
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> R[i];
  int maxv = -2000000000;
  int minv = R[0];
  
  for(int i = 1; i < n; i++){
    maxv = max(maxv, R[i] - minv);
    minv = min(minv, R[i]);
  }
  
  cout << maxv << endl;
  
  return 0;
  
  
}