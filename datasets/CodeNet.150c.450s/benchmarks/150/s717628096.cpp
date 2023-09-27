#include <bits/stdc++.h>
using namespace std;
//using ll = long long;

void CountingSort(vector<int> &A, vector<int> &B, int k) {
  vector<int> C(k+1);
  for (int  i = 0; i < k+1; i++)
    C.at(i) = 0;
  for (int i = 0; i < A.size(); i++)
    C.at(A.at(i))++;
  for (int i = 1; i < k+1; i++)
    C.at(i) += C.at(i-1);
  for (int i = A.size()-1; i >= 0; i--) {
    B.at(C.at(A.at(i))-1) = A.at(i);
    C.at(A.at(i))--;
  }
  
}
int main(void) {
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);
  int k;
  for (int i = 0; i < n; i++) {
    if (i == 0 ) k = A.at(i);
    cin >> A.at(i);
    if (k < A.at(i)) k = A.at(i);
  }
  CountingSort(A, B, k);
  for (int i = 0; i < n; i++) {
    cout << B.at(i);
    if (i != n-1)
    cout << " ";
  }
  cout << endl;
  
}
