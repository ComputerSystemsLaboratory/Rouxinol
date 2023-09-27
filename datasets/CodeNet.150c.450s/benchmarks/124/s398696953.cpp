#include <cstdint>
#include <vector>

using namespace std;

#define GRAPH_SIZE 100
#define WEIGHT_MAX (1 << 21)

enum state_t {
  WHITE,
  GRAY,
  BLACK,
};

static uint32_t graph[GRAPH_SIZE][GRAPH_SIZE];
static state_t state[GRAPH_SIZE];
static uint32_t dist[GRAPH_SIZE];

size_t single_source_shotest_path(size_t num)
{
  size_t cost = 0;

  for (uint32_t i = 0; i < num; i++) {
    state[i] = WHITE;
    dist[i] = WEIGHT_MAX;
  }

  state[0] = GRAY;
  dist[0] = 0;

  while (true) {
    size_t minimum_cost = WEIGHT_MAX;
    uint32_t to = 0;
    for (uint32_t i = 0; i < num; i++) {
      if ((dist[i] < minimum_cost) && (state[i] != BLACK)) {
        minimum_cost = dist[i];
        to = i;
      }
    }

    if (minimum_cost == WEIGHT_MAX) break;

    cost += minimum_cost;
    state[to] = BLACK;

    for (uint32_t i = 0; i < num; i++) {
      if (((dist[to] + graph[to][i]) < dist[i]) && state[i] != BLACK) {
        state[i] = GRAY;
        dist[i] = dist[to] + graph[to][i];
      }
    }
  }

  return cost;
}

#include <iostream>

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    for (uint32_t j = 0; j < num; j++) {
      graph[i][j] = WEIGHT_MAX;
    }
  }

  for (uint32_t i = 0; i < num; i++) {
    uint32_t index, len;
    cin >> index >> len;
    for (uint32_t j = 0; j < len; j++) {
      uint32_t v, c;
      cin >> v >> c;
      graph[index][v] = c;
    }
  }

  single_source_shotest_path(num);

  for (uint32_t i = 0; i < num; i++) {
    cout << i << " " << dist[i] << endl;
  }

  return 0;
}