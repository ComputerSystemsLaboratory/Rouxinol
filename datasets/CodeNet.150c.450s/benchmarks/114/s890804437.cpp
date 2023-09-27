#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n; // number of vertices 
int P[20200], A[20200], B[20200], C[20200];
pair<int, int> D[20200]; // Weights and coordinates 

int root(int a) { // find the root of a
  if (P[a] == a) return a; // a is the root
  return  (P[a] = root(P[a])); // find root of a, make it a's parent
}

bool is_same_set(int a, int b) { // a and b are in the same group?
  return root(a) == root(b);
}

void unite(int a, int b) { // put a and b in same group
  P[root(a)] = root(b);
}


int main() {
  cin >> n; // the number of vertices
  for (int i=0; i<n; ++i) {
    P[i] = i; // Initialize vertices to disjoint sets
    for (int j=0; j<n; ++j) {
      A[(n * i) + j] = i;
      B[(n * i) + j] = j;
      cin >> C[(n * i) + j];
    }
  }
  for (int i=0; i < n*n; i++) {
    D[i].first = C[i];
    D[i].second = i;
  }
  sort(D, D+n*n);
  int sum = 0;

  for (int i=0; i<n*n; ++i) {
    if (D[i].first >= 0) { // Assuming the weight is not -1
      if (!is_same_set(A[D[i].second], B[D[i].second])) {
	unite(A[D[i].second], B[D[i].second]);
	sum += D[i].first;
      }
    }
  }
  cout << sum << endl;
}