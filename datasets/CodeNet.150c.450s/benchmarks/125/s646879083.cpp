
#include <cstdint>
#include <vector>

using namespace std;

#define GRAPH_SIZE 101
#define START_INDEX 1

enum color_t {
  WHITE,
  GRAY,
  BLACK,
};

static uint32_t t = 0;
static color_t state[GRAPH_SIZE];
static vector<uint32_t> graph[GRAPH_SIZE];

void depth_first_search(void (*visited)(uint32_t), void (*invested)(uint32_t))
{
  for (uint32_t i = START_INDEX; i < GRAPH_SIZE; i++) {
    state[i] = WHITE;
  }

  static vector<pair<uint32_t, vector<uint32_t>>> stack;

  for (int32_t index = START_INDEX; index < GRAPH_SIZE; index++) {
    if (state[index] == WHITE) {
      stack.push_back(make_pair(index, graph[index]));
      state[index] = GRAY;
      t++;
      visited(index);

      while (!stack.empty()) {
        pair<uint32_t, vector<uint32_t>> top = stack.back();
        bool found = false;
        for (uint32_t i = 0; i < top.second.size(); i++) {
          uint32_t next = top.second[i];
          if (state[next] == WHITE) {
            found = true;
            state[next] = GRAY;
            t++;
            visited(next);
            stack.push_back(make_pair(next, graph[next]));
            break;
          }
        }

        if (!found) {
          stack.pop_back();
          t++;
          state[top.first] = BLACK;
          invested(top.first);
        }
      }
    }
  }
}

#include <iostream>

static uint32_t visited_time[GRAPH_SIZE];
static uint32_t invested_time[GRAPH_SIZE];

static void visited(uint32_t i)
{
  visited_time[i] = t;
}

static void invested(uint32_t i)
{
  invested_time[i] = t;
}

int32_t main(void)
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    uint32_t index, len;
    cin >> index >> len;
    for (uint32_t j = 0; j < len; j++) {
      uint32_t val;
      cin >> val;
      graph[index].push_back(val);
    }
  }

  depth_first_search(visited, invested);

  for (uint32_t i = START_INDEX; i < (START_INDEX + num); i++) {
    cout << i << " " << visited_time[i] << " " << invested_time[i] << endl;
  }

  return 0;
}