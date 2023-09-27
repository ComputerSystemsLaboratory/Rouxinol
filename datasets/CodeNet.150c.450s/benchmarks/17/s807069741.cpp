#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int input[5];
  scanf(
      "%d %d %d %d %d",
      input, input + 1, input + 2, input + 3, input + 4);
  sort(input, input + 5, [](int a, int b) { return a > b; });
  printf(
      "%d %d %d %d %d\n",
      input[0], input[1], input[2], input[3], input[4]);

  return 0;
}