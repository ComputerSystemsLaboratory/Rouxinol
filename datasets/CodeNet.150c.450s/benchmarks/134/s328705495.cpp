#include <iostream>
#include <cstdlib>
#include <list>

const int MAX_N = 25;

struct Node {
  int parent;
  int left;
  int right;
  bool visited;
};

int findRoot(struct Node *nodes[], int n) {
  int index = -1;
  
  for (int i = 0; i < n; i++) {
    if (nodes[i]->parent < 0) {
      index = i;
      
      break;
    }
  }

  return index;
}

void printByInorder(struct Node *nodes[], int n, int rootID) {
  std::list<int> list;

  list.push_front(rootID);
  
  std::cout << "Inorder" << std::endl;
  
  while (!list.empty()) {
    int id = list.front();
    list.pop_front();
    
    if (id < 0) {
      continue;
    }
    
    struct Node *node = nodes[id];

    if (!node->visited) {
      node->visited = true;

      list.push_front(node->right);
      list.push_front(id);
      list.push_front(node->left);       
    } else {
      std::cout << " " << id;
    }
  }

  std::cout << std::endl;  
}

void printByPreorder(struct Node *nodes[], int n, int rootID) {
  std::cout << "Preorder" << std::endl;
  
  std::list<int> list;

  list.push_front(rootID);

  while (!list.empty()) {
    int id = list.front();
    list.pop_front();

    if (id < 0) {
      continue;
    }

    std::cout << " " << id;

    struct Node *node = nodes[id];

    list.push_front(node->right);
    list.push_front(node->left);    
  }

  std::cout << std::endl;
}

void printByPostorder(struct Node *nodes[], int n, int rootID) {
  std::list<int> list;

  list.push_front(rootID);
  
  std::cout << "Postorder" << std::endl;
  
  while (!list.empty()) {
    int id = list.front();
    list.pop_front();
    
    if (id < 0) {
      continue;
    }
    
    struct Node *node = nodes[id];

    if (!node->visited) {
      node->visited = true;
      
      list.push_front(id);      
      list.push_front(node->right);
      list.push_front(node->left);
    } else {
      std::cout << " " << id;
    }
  }

  std::cout << std::endl;    
}

void setVisited(struct Node *nodes[], int n, bool visited) {
  for (int i = 0; i < n; i++) {
    nodes[i]->visited = visited;
  }
}

int main(void) {
  int n;

  std::cin >> n;

  struct Node *nodes[MAX_N];

  for (int i = 0; i < n; i++) {
    struct Node *node = (struct Node *) std::malloc(sizeof(struct Node));
    
    node->parent = -1;
    node->left = -1;
    node->right = -1;
    node->visited = false;

    nodes[i] = node;
  }

  for (int i = 0; i < n; i++) {
    int id = 0;

    std::cin >> id;
    
    struct Node *node = nodes[id];

    std::cin >> node->left;
    std::cin >> node->right;

    if (node->left >= 0) {
      nodes[node->left]->parent = id;
    }

    if (node->right >= 0) {
      nodes[node->right]->parent = id;
    }
  }

  int rootID = findRoot(nodes, n);

  setVisited(nodes, n, false);
  printByPreorder(nodes, n, rootID);

  setVisited(nodes, n, false);
  printByInorder(nodes, n, rootID);

  setVisited(nodes, n, false);
  printByPostorder(nodes, n, rootID);

  return 0;
}