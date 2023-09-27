#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;
int A[1005][1005]={};

int main() {
  int j,k;
  string a,b;
  cin >> a >> b;
  for(j=1;j<=a.size();j++) A[j][0] = j;
  for(k=1;k<=b.size();k++) A[0][k] = k;

  for(j=1;j<=a.size();j++) {
    for(k=1;k<=b.size();k++) {
      int m = min(A[j-1][k]+1, A[j][k-1]+1);
      if(a[j-1] == b[k-1]) {
        m = min(m,A[j-1][k-1]);
        A[j][k] = m;
      }else {
        m = min(m,A[j-1][k-1]+1);
        A[j][k] = m;
      }
    }
  }
  cout << A[a.size()][b.size()] << endl;
  return 0;
}
