#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
  int n, p;
  while (scanf("%d %d", &n, &p), n|p) {
    int hand[n];
    memset(hand, 0, sizeof(hand));
    int owan = p;
    for (int turn = 0;; turn = (turn + 1) % n) {
      if (owan == 1) {
        int i;
        for (i = 0; i < n; ++i) {
          if (i == turn)
            continue;
          if (hand[i] > 0)
            break;
        }
        if (i == n) {
          printf("%d\n", turn);
          break;
        }
      }
      if (owan > 0) {
        ++hand[turn];
        --owan;
      } else {
        owan += hand[turn];
        hand[turn] = 0;
      }
    }
  }
}