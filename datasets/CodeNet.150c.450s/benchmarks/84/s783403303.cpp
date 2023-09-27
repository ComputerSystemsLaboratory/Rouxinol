/**
 * The Number of Inversions
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D&lang=ja
 */

#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  // L[0...n1], R[0...n2] を生成
  vector <int>L(n1 + 1);
  for (int i = 0; i < n1; i++) {
    L.at(i) = A.at(left + i);
  }
  vector <int>R(n2 + 1);
  for (int i = 0; i < n2; i++) {
    R.at(i) = A.at(mid + i);
  }

  L.at(n1) = INT_MAX;
  R.at(n2) = INT_MAX;
  int i = 0;
  int j = 0;
  long long cnt = 0;
  for (int k = left; k < right; k++) {
    if (L.at(i) <= R.at(j)) {
      A.at(k) = L.at(i);
      i = i + 1;
    } else {
      A.at(k) = R.at(j);
      j = j + 1;
      // L.at(i) > R.at(j)
      // Lに含まれマージ後にR[j]よりも後に移動する要素の数
      // つまり、バブルソートにおいても反転される回数となる
      cnt += n1 - i; // = mid + j - k - 1
    }
  }
  return cnt;
}

long long mergeSort(vector<int> &A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    long long c1 = mergeSort(A, left, mid);
    long long c2 = mergeSort(A, mid, right);
    long long c3 = merge(A, left, mid, right);
    return c1 + c2 + c3;
  } else {
    return 0;
  }
}

int main(){
  // １行目に n、２行目に S を表す n 個の整数が与えられます。 
  int n;
  cin >> n;

  // 配列を受け取る
  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S.at(i);
  }

  // マージソートの実行
  long long cnt = mergeSort(S, 0, n);
  cout << cnt << endl;
}

