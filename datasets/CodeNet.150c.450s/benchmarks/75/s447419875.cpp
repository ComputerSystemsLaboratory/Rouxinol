#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
vector<int> A;

void maxHeapify(int i) {
  int left = 2*i;
  int right = 2*i + 1;
  int largest = 0;

  if (left <= A.size()-1 && A.at(left) > A.at(i)) {
    largest = left;
  } else {
    largest = i;
  }
  if (right <= A.size()-1 && A.at(right) > A.at(largest)) {
    largest = right;
  }

  if (largest != i) {
    int tmp = A.at(largest);
    A.at(largest) = A.at(i);
    A.at(i) = tmp;
    maxHeapify(largest);
  }
}

void buildMaxHeap(int n){
  int p = n/2;
  while (p > 0) maxHeapify(p--);
}


int main() {
  int n; cin >> n;
  A.push_back(0);
  rep(i, n) {
    int tp; cin >> tp;
    A.push_back(tp);
  }
  buildMaxHeap(n);
  rep(i, n) cout << " " << A.at(i+1);
  cout << endl;
}

