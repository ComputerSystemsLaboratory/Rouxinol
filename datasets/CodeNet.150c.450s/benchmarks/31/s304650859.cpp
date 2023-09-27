#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> R;

  cin >> N;
  for(int i=0;i<N;i++) {
    int r;
    cin >> r;
    R.push_back(r);
  }

  int max_p = R[1] - R[0];
  int min_r = R[0];
  for(int i=1;i<N;i++) {
    min_r = min(min_r,R[i-1]);
    max_p = max(max_p,R[i]-min_r);
  }
  cout << max_p << endl;
}