#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {
  char *line = NULL;
  size_t buffer_size = 0;
  int frequencies[101] = {};
  int max_frequency = 0;
  while (getline(&line, &buffer_size, stdin) > 0) {
    int n;
    sscanf(line, "%d", &n);
    max_frequency = max(max_frequency, ++frequencies[n]);
  }
  free(line);

  for (int i = 1; i < 101; ++i) {
    if (frequencies[i] == max_frequency) {
      printf("%d\n", i);
    }
  }

  return 0;
}