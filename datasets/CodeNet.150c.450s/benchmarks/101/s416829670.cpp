#include <iostream>
#include <stdint.h>
#include <vector>

using namespace std;

#define GRAPH_MAX_SIZE 100000
#define WHITE -1

vector<uint32_t> vertexes[GRAPH_MAX_SIZE];
int32_t colors[GRAPH_MAX_SIZE];

void graph_connected_components_init()
{
  uint32_t i;
  for (i = 0; i < GRAPH_MAX_SIZE; i++) {
    vertexes[i].clear();
    colors[i] = WHITE;
  }
}

void graph_connected_components_add(uint32_t vertex, uint32_t connect_to)
{
  vertexes[vertex].push_back(connect_to);
  vertexes[connect_to].push_back(vertex);
}

uint32_t *graph_connected_components_connected_vertexes(uint32_t vertex)
{
  return &vertexes[vertex][0];
}

void colorize_connecting_vertex(vector<uint32_t> *connect_to, int32_t color)
{
  uint32_t i;
  for (i = 0; i < connect_to->size(); i++) {
    uint32_t index = (*connect_to)[i];
    if (colors[index] == WHITE) {
      colors[index] = color;
      colorize_connecting_vertex(&vertexes[index], color);
    }
  }
}

void graph_connected_components_colorize()
{
  int32_t i;
  for (i = 0; i < GRAPH_MAX_SIZE; i++) {
    if (colors[i] == WHITE) {
      colors[i] = i;
      vector<uint32_t> connect_to = vertexes[i];
      colorize_connecting_vertex(&connect_to, i);
    }
  }
}

bool graph_connected_components_is_connected(uint32_t index1, uint32_t index2)
{
  if (colors[index1] == colors[index2]) return true;
  return false;
}

#if !defined(TEST)
#include <iostream>
using namespace std;
int32_t main(void)
{
  graph_connected_components_init();

  int32_t users, connections;
  cin >> users >> connections;

  uint32_t i;
  for (i = 0; i < connections; i++) {
    uint32_t index, connection;
    cin >> index >> connection;
    graph_connected_components_add(index, connection);
  }
  graph_connected_components_colorize();

  int32_t questions;
  cin >> questions;
  for (i = 0; i < questions; i++) {
    uint32_t index1, index2;
    cin >> index1 >> index2;
    if (graph_connected_components_is_connected(index1, index2)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}
#endif