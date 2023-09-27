#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  // LOGe(x)
  //
  // N <= 200000 のため、低が2の対数に変換すると、最大でも18未満となる
  //
  // * LOG2(131072) = 17
  // * LOG2(262144) = 18
  //
  // 低が e (ネイピア数) の場合、log(200000) ~ 12.2061 となる
  //
  // * 前提
  //   * i学期の評点をL[i]とする
  // * 追加の前提
  //   * C[i] = logA[1] + logA[2] + logA[3] + ... logA[i]
  //   * M[i] = logL[i]
  //          = C[i] - C[i-K]
  //          = logA[i-K+1] + logA[i-K+2] + ... + logA[i]
  //          // 積の対数の性質 (logMN = logM + logN) より
  //          = logA[(i-K+1) * (i-K+2) * ... * (i)]
  // * i=5, K=3の場合
  //   * M[5] = logL[5]
  //          = C[5] - C[2]
  //          = logA[3] + logA[4] + logA[5]
  //          = logA[3 * 4 * 5]

  // 期末テストの点数を受け取り
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // 累積和を作成
  vector<double> B(N + 1, 0);
  for (int i = 0; i < N; i++) {
    double n = log10(A.at(i));
    B.at(i + 1) = B.at(i) + n;
  }

  // 累積和から、各学期の評点を算出
  //
  //  N=5, K=3
  //  96 98 95 100 20
  // 0  1  2  3   4  5
  vector<double> M(N + 1);
  for (int i = K; i <= N; i++) {
    // i学期の評点
    //   log10(A[i]) + log10(A[i-1]) + ... + log10(A[i-K+1])
    // = log10(A[i] * A[i-1] * ... * A[i-K+1])
    // i-1学期の評点
    //   log10(A[i-1]) + log10(A[i-2]) + ... + log10(A[i-K])
    // = log10(A[i-1] * A[i-2] * ... * A[i-K])
    M.at(i) = B.at(i) - B.at(i - K);
  }

  // i学期の評点とi-1学期の評点を比較する
  for (int i = K + 1; i <= N; i++) {
    // 標準入力を以下と仮定する
    //
    //   N=4
    //   K=3
    //   A=[10**9-1, 10**9, 10**9, 10**9]
    //
    // 累積和からi学期の評点の対数を算出する
    //
    //   M[2] = log10(A(0))  + log10(A(1))  + log10(A(2))
    //        = log10(10**9-1) + log10(10**9) + log10(10**9)
    //        = log10(10**9-1 * 10**9 * 10**9)
    //
    //   M[3] = log10(A(1))  + log10(A(2))  + log10(A(3))
    //        = log10(10**9) + log10(10**9) + log10(10**9)
    //        = log10(10**9 * 10**9 * 10**9)
    //
    // 真数 x の値が大きくなるほど、
    // x が1増減した際の対数 log(x) の変化幅は小さくなる。
    //
    // Ai <= 10**9 より、対数の変化幅が最も小さくなるケースは以下である。
    //
    //   log10(10**9) - log10(10**9-1) ~ 0.00000000043429437824
    //
    // これより、i学期とi-1学期の評点の対数の差は
    // 最低でも 4.5 * 10**-10 以上である。
    //
    //   | M[i] - M[i-1] | >= 0.00000000043429437824
    //   | M[i] - M[i-1] | >= 4.34294 * 10**-10
    //   | M[i] - M[i-1] | >= 4.5 * 10**-10
    //
    //
    // あるいは、i学期の評点とi-1学期の評点の差は 1.000000001 倍以上である。
    //
    //   (10**9) / (10**9-1) = 1.000000001
    //
    // 商の対数より log10(M/N) = log10(M) - log10(N) である。
    //
    //   M[3] - M[2] = (log10(10**9) + log10(10**9) + log(10**9)) - (log10(10**9-1) + log10(10**9) + log10(10**9))
    //               = log10(10**9) - log10(10**9-1)
    //               // 商の対数
    //               = log10(10**9 / 10**9-1)
    //               = log10(1.000000001)
    //               ~ 4.34294 * 10**-10
    //   M[3] - M[2] >= 4.5 * 10**-10
    //
    //
    // これらより、i学期の評点とi-1学期の評点の対数の差が以下を満たす場合、
    // 評点は同じと判定する
    //
    //   M[i] - M[i-1] < 4.34294 * 10**-10
    //   M[i] - M[i-1] > 4.34294 * 10**-10
    //

    // 評点の差が一定以下の場合、同値と判定する
    if (M.at(i) > M.at(i - 1) + 1e-10) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
