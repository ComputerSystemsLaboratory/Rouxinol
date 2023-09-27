#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximum_sum_seq(vector<int> &seq,int n) {
  int max_sum = seq[0];
  for(int i=0;i<n;i++) {
    int cur = 0;
    for(int j=i;j<n;j++) {
      cur += seq[j];
      max_sum = max(max_sum,cur);
    }
  }
  return max_sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  while(cin >> n) {
    if(n == 0) break;
    vector<int> seq(n);
    for(int i=0;i<n;i++) {
      cin >> seq[i];
    }
    cout << maximum_sum_seq(seq,n) << endl;
  }
}