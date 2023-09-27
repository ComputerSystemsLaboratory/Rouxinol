#include <iostream>
#include <cstdlib>

const int KIND_COUNT = 4;

const int A_INT = 0;
const int T_INT = 1;
const int G_INT = 2;
const int C_INT = 3;

const char A_CHAR = 'A';
const char T_CHAR = 'T';
const char G_CHAR = 'G';
const char C_CHAR = 'C';

struct Node {
  bool exist;
  struct Node *next[KIND_COUNT];
};

int kind(char v) {
  if (v == A_CHAR) {
    return A_INT;
  } else if (v == T_CHAR) {
    return T_INT;
  } else if (v == G_CHAR) {
    return G_INT;
  } else {
    return C_INT;
  }
}

struct Node *createNode() {
  struct Node *node = (struct Node *) malloc(sizeof(struct Node));

  for (int i = 0; i < KIND_COUNT; i++) {
    node->next[i] = NULL;
  }

  node->exist = false;

  return node;
}

void insert(struct Node *root, std::string word) {
  struct Node *node = root;
  
  for (int i = 0; i < word.size(); i++) {
    int k = kind(word[i]);

    if (node->next[k] == NULL) {
      node->next[k] = createNode();
    }

    node = node->next[k];
  }

  node->exist = true;
}

bool find(struct Node *root, std::string word) {
  struct Node *node = root;
  
  for (int i = 0; i < word.size(); i++) {
    int k = kind(word[i]);

    if (node->next[k] == NULL) {
      return false;
    }

    node = node->next[k];
  }

  return node->exist;
}



int main() {
  std::ios_base::sync_with_stdio(false);

  struct Node *root = createNode();
  
  int n = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::string command;
    std::string word;

    std::cin >> command >> word;

    if (command[0] == 'i') {
      insert(root, word);
    } else {
      if (find(root, word)) {
	std::cout << "yes" << std::endl;
      } else {
	std::cout << "no" << std::endl;
      }
    }
  }
  
  return 0;
}