#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

const int MAX_N = 100;

struct Node {
  int v;
  int firstVisitedTime;
  int lastVisitedTime;
  bool visited;
};

void visit(int *count, int n, std::vector<std::list<int> *> *graph, std::vector<struct Node *> *nodes) {
  (*count)++;
  
  struct Node *node = nodes->at(n);

  if (!node->visited) {
    node->firstVisitedTime = *count;
    node->visited = true;
  }  

  //  std::cout << (*count) << " = " << n << std::endl;

  std::list<int> *neighbors = graph->at(n);

  while (!neighbors->empty()) {
    int v = neighbors->front();
    neighbors->pop_front();
    
    if (!nodes->at(v)->visited) {
      visit(count, v, graph, nodes);
    }
  }

  (*count)++;
  node->lastVisitedTime = (*count);

  //  std::cout << (*count) << " = " << n << std::endl;
}

int main(void) {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);  

  int n = 0;
  std::cin >> n;

  std::vector<std::list<int> *> *graph = new std::vector<std::list<int> *>(n + 1);
  std::vector<struct Node *> *nodes = new std::vector<struct Node *>(n + 1);
  
  for (int i = 1; i <= n; i++) {
    int v = 0;
    std::cin >> v;

    int k = 0;
    std::cin >> k;

    std::list<int> *neighbors = new std::list<int>();

    for (int i = 0; i < k; i++) {
      int a = 0;
      std::cin >> a;

      neighbors->push_back(a);
    }

    graph->at(i) = neighbors;

    struct Node *node = (struct Node *) std::malloc(sizeof(struct Node));

    node->v = i;
    node->firstVisitedTime = 0;
    node->lastVisitedTime = 0;
    node->visited = false;
    
    nodes->at(i) = node;
  }

  int count = 0;

  for (std::vector<struct Node *>::iterator iterator = nodes->begin() + 1; iterator != nodes->end(); ++iterator) {
    struct Node *node = *iterator;
    
    if (!node->visited) {
      visit(&count, node->v, graph, nodes);
    }
  }

  for (std::vector<struct Node *>::iterator iterator = nodes->begin() + 1; iterator != nodes->end(); ++iterator) {
    struct Node *node = *iterator;
        
    std::cout << node->v << " " << node->firstVisitedTime << " " << node->lastVisitedTime << std::endl;
  }
  
  return 0;
}