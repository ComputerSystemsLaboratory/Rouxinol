#include <iostream>
int main()
  {int N, K; std::cin >> N >> K; int A[N]; for (auto &a: A) std::cin >> a;
  for (int i{K}; i < N; ++i) puts(A[i] > A[i - K] ? "Yes" : "No");}