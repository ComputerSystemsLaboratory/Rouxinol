#include <cstdint>
#include <vector>

using namespace std;
#define GRAPH_SIZE 100

static vector<uint32_t> graph[GRAPH_SIZE];

void graph_to_matrix(vector<uint32_t> graph[], uint32_t matrix[][GRAPH_SIZE])
{
  for(uint32_t i = 0; i < GRAPH_SIZE; i++){
    for(uint32_t j = 0; j < GRAPH_SIZE; j++){
      matrix[i][j] = 0;
    }
  }

  for(uint32_t i = 0; i < GRAPH_SIZE; i ++){
    for(uint32_t j = 0; j < graph[i].size(); j++){
      uint32_t val = graph[i][j];
      matrix[i][val] = 1;
    }
  }
}

#include <iostream>

static uint32_t matrix[GRAPH_SIZE][GRAPH_SIZE];

int32_t main(void)
{
  uint32_t num;
  cin >> num;
  for(uint32_t i = 0; i < num; i++){
    uint32_t index, len;
    cin >> index >> len;
    for(uint32_t j = 0; j < len; j++){
      uint32_t val;
      cin >> val;
      graph[index - 1].push_back(val - 1);
    }
  }
  graph_to_matrix(graph, matrix);

  for(uint32_t i = 0; i < num; i++){
    for(uint32_t j = 0; j < num; j++){
      if(j != 0) cout << " ";
      cout << matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}