#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  while (true) {
    int N, M, P;
    cin >> N >> M >> P;

    if (N == 0) { break; }

    int atari_count;
    int ticket_count = 0;
    for (int i = 0; i < N; i++) {
      int input;
      cin >> input;
      ticket_count += input;
      if (i+1 == M) { atari_count = input; }
    }

    if (atari_count != 0) {
      printf("%d", 100 * ticket_count * (100 - P) / 100 / atari_count);
    } else {
      printf("0");
    }

    puts("");
  }
  return 0;
}