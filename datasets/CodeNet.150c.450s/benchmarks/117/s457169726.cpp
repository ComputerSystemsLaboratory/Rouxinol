# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

int num = 0;

void merge(vector<int> &A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vector<int> L(n1+1), R(n2+1);

  rep (i, n1) {
    L[i] = A[left+i];
  }
  rep (i, n2) {
    R[i] = A[mid+i];
  }

  L[n1] = 1001001001;
  R[n2] = 1001001001;

  int i = 0;
  int j = 0;

  for (int k = left; k < right; k++) {
    num++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }
    else {
      A[k] = R[j];
      j++;
    }
  }
}

void merge_sort(vector<int> &A, int left, int right) {
  if ((left+1) < right) {
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid, right);
    merge(A, left, mid, right);
  }
}


int main() {
  int n;
  cin >> n;
  
  vector<int> A(n);
  rep (i, n) cin >> A[i];

  merge_sort(A, 0, n);
  
  cout << A[0];
  for(int i=1; i<n; i++) cout << ' ' << A[i];
  cout << endl;
  
  cout << num << endl;
}