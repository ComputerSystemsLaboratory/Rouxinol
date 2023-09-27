#include <cstdint>
#include <queue>
#include <vector>

using namespace std;

#define GRAPH_SIZE 101
#define START_INDEX 1

enum color_t {
  WHITE,
  GRAY,
  BLACK,
};

struct data_t {
  uint32_t index;
  vector<uint32_t> connection;
  uint32_t distance;
};

static vector<uint32_t> graph[GRAPH_SIZE];
static color_t state[GRAPH_SIZE];

void breadth_first_search(void (*callback)(uint32_t, uint32_t))
{
  for (uint32_t i = START_INDEX; i < GRAPH_SIZE; i++) {
    state[i] = WHITE;
  }

  queue<data_t> queue;

  data_t data;
  data.index = START_INDEX;
  data.connection = graph[START_INDEX];
  data.distance = 0;

  queue.push(data);
  state[START_INDEX] = GRAY;

  while (!queue.empty()) {
    data_t top = queue.front();
    queue.pop();

    state[top.index] = BLACK;
    callback(top.index, top.distance);

    for (uint32_t i = 0; i < top.connection.size(); i++) {
      if (state[top.connection[i]] == WHITE) {
        data_t data;
        data.index = top.connection[i];
        data.connection = graph[top.connection[i]];
        data.distance = top.distance + 1;
        queue.push(data);
        state[data.index] = GRAY;
      }
    }
  }
}

#include <iostream>

int32_t distances[GRAPH_SIZE];

static void callback(uint32_t index, uint32_t distance)
{
  distances[index] = distance;
}

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = START_INDEX; i < START_INDEX + num; i++) {
    distances[i] = -1;
  }

  for (uint32_t i = 0; i < num; i++) {
    uint32_t index, len;
    cin >> index >> len;
    for (uint32_t j = 0; j < len; j++) {
      uint32_t val;
      cin >> val;
      graph[index].push_back(val);
    }
  }

  breadth_first_search(callback);

  for (uint32_t i = START_INDEX; i < START_INDEX + num; i++) {
    cout << i << " " << distances[i] << endl;
  }

  return 0;
}