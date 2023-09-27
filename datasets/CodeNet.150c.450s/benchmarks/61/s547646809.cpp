#include <iostream>
#include <vector>

int linear_random(int A, int B, int C, int x);

int main(int argc, char const* argv[])
{
  while (true) {
    int N, A, B, C, X;
    std::cin >> N >> A >> B >> C >> X;
    if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0)
      break;
    std::vector<int> reels(N);
    for (int i = 0; i < N; ++i)
      std::cin >> reels[i];
    int frame = 0;
    int random = X;
    int i = 0;
    while (i < N) {
      if (reels[i] == random) {
        ++i;
        if (i == N)
          break;
      }
      random = linear_random(A, B, C, random);
      ++frame;
      if (frame > 10000)
        goto fail;
    }
    std::cout << frame << std::endl;
    continue;
fail:
    std::cout << -1 << std::endl;
  }
  return 0;
}

int linear_random(int A, int B, int C, int x) {
  return (A * x + B) % C;
}