#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;


int main(void){
  int N;
  cin >> N;
  vector<long long> v(N);
  cin >> v[0];
  for(int i=1;i<N;i++){
    cin >> v[i];
  }
  long long maxv = -10000000007;
  long long minv = 10000000007;
  for(int i=0;i<N;i++){
    maxv = max(maxv, v[i] - minv);
    minv = min(minv, v[i]);
  }
  cout << maxv << endl;
  return 0;
}