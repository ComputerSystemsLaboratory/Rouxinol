#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
  char *line = NULL;
  size_t buffer_size;
  while (getline(&line, &buffer_size, stdin) > 0) {
    int answer[4];
    int guess[4];
    sscanf(line, "%d %d %d %d", answer, answer+1, answer+2, answer+3);
    getline(&line, &buffer_size, stdin);  // Should be always success.
    sscanf(line, "%d %d %d %d", guess, guess+1, guess+2, guess+3);

    int hit = 0;
    for (int i = 0; i < 4; ++i) {
      if (answer[i] == guess[i]) { ++hit; }
    }
    sort(answer, answer+4);
    sort(guess, guess+4);
    int intersection[] = { -1, -1, -1, -1 };
    set_intersection(answer, answer+4, guess, guess+4, intersection);
    int blow = -hit;
    for (int i = 0; i < 4; ++i) {
      if (intersection[i] < 0) { break; }
      ++blow;
    }
    printf("%d %d\n", hit, blow);
  }
  free(line);

  return 0;
}