#include <iostream>
#include <cstdlib>

struct Node {
  int value;
  struct Node *next;
  struct Node *prev;
};

void insert(struct Node *dummy, int x) {
  struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

  newNode->value = x;
  
  newNode->prev = dummy;
  newNode->next = dummy->next;

  dummy->next->prev = newNode;
  dummy->next = newNode;
}

struct Node *search(struct Node *dummy, int x) {
  struct Node *node = dummy->next;

  struct Node *result = NULL;

  while (node != dummy) {
    if (node->value == x) {
      result = node;

      break;
    }

    node = node->next;
  }

  return result;
}

void deleteNode(struct Node *dummy, struct Node *node) {
  if ((dummy == node) || (node == NULL)) {
    return;
  }

  node->prev->next = node->next;
  node->next->prev = node->prev;
}

void deleteFirst(struct Node *dummy) {
  deleteNode(dummy, dummy->next);
}

void deleteLast(struct Node *dummy) {
  deleteNode(dummy, dummy->prev);
}

void printNodes(struct Node *dummy) {
  struct Node *node = dummy->next;

  while (node != dummy) {
    std::cout << node->value;

    node = node->next;

    if (node != dummy) {
      std::cout << " ";
    } else {
      std::cout << std::endl;
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  
  struct Node *dummy = (struct Node *) malloc(sizeof(struct Node));

  dummy->next = dummy;
  dummy->prev = dummy;
  
  int n = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::string command;
    
    std::cin >> command;

    if (command == "insert") {
      int x = 0;

      std::cin >> x;

      insert(dummy, x);
    } else if (command == "delete") {
      int x = 0;

      std::cin >> x;
      
      deleteNode(dummy, search(dummy, x));
    } else if (command == "deleteFirst") {
      deleteFirst(dummy);
    } else if (command == "deleteLast") {
      deleteLast(dummy);
    }

    //    printNodes(dummy);
  }
  
  printNodes(dummy);
  
  return 0;
}