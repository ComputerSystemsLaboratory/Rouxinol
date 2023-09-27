#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>

#include <memory>
#include <vector>
#include <queue>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...) do { \
    printf("D(L%d) %s: ", __LINE__, __func__); \
    printf(__VA_ARGS__); \
  } while (false)
#else
#define DPRINTF(...)
#endif // DEBUG


struct Vertex {
  Vertex() :
    id_(-1),
    visited_(0),
    distance_(-1),
    adjNum_(-1) { }

  int id_;
  bool visited_;
  int distance_;
  int adjNum_;
  unique_ptr<int[]> adjIds_;

  void set(int id, vector<int> ids);
  void printInfo();
  void printDistance();
};


void Vertex::set(int id, vector<int> ids)
{
  id_ = id;
  adjNum_ = ids.size();

  if (adjNum_ == 0)
    return;

  adjIds_ = unique_ptr<int[]>(new int[adjNum_]);

  for (int i = 0; i < adjNum_; i++)
    adjIds_[i] = ids[i];
}


void Vertex::printInfo()
{
  DPRINTF("%d %d", id_, adjNum_);
  for (int i = 0; i < adjNum_; i++)
    printf(" %d", adjIds_[i]);
  cout << endl;
}


void Vertex::printDistance()
{
  printf("%d %d\n", id_, distance_);
}


void bfs(Vertex vertices[])
{
  const int startId = 1;
  queue<int> idQueue;

  idQueue.push(startId);

  int distance = 0;

  while (!idQueue.empty()) {

    DPRINTF("queue size %lu\n", idQueue.size());

    const size_t numOfThisDist = idQueue.size();

    for (size_t i = 0; i < numOfThisDist; i++)
    {
      int id = idQueue.front();
      idQueue.pop();

      DPRINTF("%zu  id %d\n", i, id);

      Vertex &vtx = vertices[id];

      if (vtx.visited_)
        continue;

      vtx.visited_ = true;
      vtx.distance_ = distance;

      for (int j = 0; j < vtx.adjNum_; j++)
        idQueue.push(vtx.adjIds_[j]);

    }

    distance++;
  }
}


int main() {
  int n;
  cin >> n; cin.ignore();

  DPRINTF("%d\n", n);

  // do not use [0], it's empty
  Vertex vertices[n+1];

  for (int i = 1; i <= n; i++)
  {
    int node, adjNum;

    cin >> node >> adjNum;

    vector<int> adjs;

    for (int j = 0; j < adjNum; j++)
    {
      int v;
      cin >> v;
      adjs.push_back(v);
    }

    vertices[i].set(node, adjs);

    cin.ignore();

  }

#if DEBUG
  for (int i = 1; i <= n; i++)
    vertices[i].printInfo();
#endif // DEBUG

  bfs(vertices);

  for (int i = 1; i <= n; i++)
    vertices[i].printDistance();

  return 0;

}

