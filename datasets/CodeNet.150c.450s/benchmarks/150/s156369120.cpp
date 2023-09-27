/**
 * Counting Sort
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_A&lang=ja
 */

#include <bits/stdc++.h>
using namespace std;

/**
CountingSort(A, B, k)
    for i = 0 to k
        C[i] = 0

    // C[i] に i の出現数を記録する
    for j = 1 to n
        C[A[j]]++

    // C[i] に i 以下の数の出現数を記録する
    for i = 1 to k
        C[i] = C[i] + C[i-1]

    for j = n downto 1
        B[C[A[j]]] = A[j]
        C[A[j]]--
*/

// 入力の最初の行に、数列 A の長さを表す整数 n が与えられます。
int n;

void printVector(vector<int> &A) {
  for (int i = 0; i < A.size(); i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << A.at(i);
  }
  cout << endl;
}

void countingSort(vector<int> &A, vector<int> &B, int k) {
  // C[i] に i の出現数を記録する
  vector<int> C(k + 1, 0);
  for (int i = 0; i < n; i++) {
    C.at( A.at(i) )++;
  }

  // C[i] に i 以下の数の出現数を記録する
  for (int i = 1; i <= k; i++) {
    C.at(i) = C.at(i) + C.at(i-1);
  }

  // printVector(C);
  for (int i = n - 1; i >= 0; i--) {
      // 配列の要素の位置に換算するため、1を引く必要がある
      B.at( C.at( A.at(i) ) - 1 ) = A.at(i);
      C.at( A.at(i) )--;
  }
}

int main() {
  // 1行目にカードの枚数 n が与えられます。
  cin >> n;

  // ２行目に、n 個の整数が空白区切りで与えられます。 
  vector<int> A(n);
  int maxA = 0;
  for (int i = 0; i < n; i++) {
    cin >> A.at(i);
    maxA = max(maxA, A.at(i));
  }

  vector<int> B = A;
  countingSort(A, B, maxA);

  // 結果の出力
  printVector(B);
}

