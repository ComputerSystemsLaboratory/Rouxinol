/**
 * Partition
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_B&lang=ja
 */

#include <bits/stdc++.h>
using namespace std;

/*
partition(A, p, r)
  x = A[r]
  i = p-1
  for j = p to r-1
    if A[j] <= x
      i = i+1
      A[i] と A[j] を交換
  A[i+1] と A[r] を交換
  return i+1
*/

int partition(vector<int> &A, int p, int r) {
  int x = A.at(r);
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A.at(j) <= x) {
      i = i+1;
      // cout << "swap" << i << ' ' << j;
      swap(A.at(i), A.at(j));
    }
  }

  swap(A.at(i + 1), A.at(r));
  return i + 1;
}

int main(){
  // 1行目にn、2行目にSを表すn個の整数が与えられます。 
  int n;
  cin >> n;

  // 配列を受け取る
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }

  // パーティションの実行
  int place = partition(S, 0, n - 1);

  // 結果の出力
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    if (i == place) {
      cout << '[' << S.at(i) << ']';
    } else {
      cout << S.at(i);
    }
	}

  cout << endl;
}

