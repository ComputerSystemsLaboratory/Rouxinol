#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>

using namespace std;

int main(void) {
  int n,m;
  int t;
  int mi = 0;
  string line,item;
  cin >> n >> m;
  cin.ignore();
  int A[n][m],b[m],answer[n];
  fill(A[0], A[n], 0);
  fill(b, b + m, 0);
  fill(answer, answer + n, 0);
  for(int i = 0; i < n; i++) {
    getline(cin, line);
    stringstream ss(line);
    while(getline(ss, item, ' '))
      A[i][mi++] = atoi(item.c_str());
    mi = 0;
  }
  for(int i = 0; i < m; i++) {
    cin >> t;
    b[i] = t;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      answer[i] += A[i][j] * b[j];
    }
  }
  for(int i = 0; i < n; i++)
    cout << answer[i] << endl;
  return 0;
}