#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <climits>

const int MAX_N = 100;

struct Node {
  int v;
  int d;
  bool visited;
};

int main(void) {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);  

  int n = 0;
  std::cin >> n;

  std::vector<std::vector<int> *> *graph = new std::vector<std::vector<int> *>(n + 1);
  std::vector<struct Node *> *nodes = new std::vector<struct Node *>(n + 1);
  
  for (int i = 1; i <= n; i++) {
    int v = 0;
    std::cin >> v;

    int k = 0;
    std::cin >> k;

    std::vector<int> *neighbors = new std::vector<int>(k);

    for (int j = 0; j < k; j++) {
      int a = 0;
      std::cin >> a;

      neighbors->at(j) = a;
    }

    graph->at(i) = neighbors;

    struct Node *node = (struct Node *) std::malloc(sizeof(struct Node));

    node->v = i;
    node->d = INT_MAX;
    node->visited = false;
    
    nodes->at(v) = node;
  }

  int count = 0;
  int start = 1;

  std::list<int> *stack = new std::list<int>();

  stack->push_back(nodes->at(start)->v);

  while (!stack->empty()) {
    std::vector<int> *newNodes = new std::vector<int>();

    while (!stack->empty()) {    
      int v = stack->front();
      stack->pop_front();

      if (count < nodes->at(v)->d) {
	nodes->at(v)->d = count;
      }
      
      nodes->at(v)->visited = true;
      
      std::vector<int> *neighbors = graph->at(v);

      for (std::vector<int>::iterator iterator = neighbors->begin(); iterator != neighbors->end(); ++iterator) {
	struct Node *node = nodes->at(*iterator);

	if (!node->visited) {
	  newNodes->push_back(node->v);
	}
      }
    }

    for (std::vector<int>::iterator iterator = newNodes->begin(); iterator != newNodes->end(); ++iterator) {
      stack->push_front(*iterator);
    }

    count++;
  }

  for (std::vector<struct Node *>::iterator iterator = nodes->begin() + 1; iterator != nodes->end(); ++iterator) {
    struct Node *node = *iterator;

    if (node->d == INT_MAX) {
      node->d = -1;
    }
        
    std::cout << node->v << " " << node->d << std::endl;
  }
  
  return 0;
}