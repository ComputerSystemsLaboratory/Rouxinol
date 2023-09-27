#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

struct Node {
  int key;
  struct Node *prev, *next;
};

Node *nil;

void initNode() {
  nil = (Node *)malloc(sizeof(Node));
  nil->prev = nil;
  nil->next = nil;
}

void insert(int key) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->key = key;
  node->next = nil->next;
  node->next->prev = node;
  node->prev = nil;
  nil->next = node;
}

void deleteNode(Node *n) {
  if (n == nil)
    return;
  n->prev->next = n->next;
  n->next->prev = n->prev;
  free(n);
}

void deleteX(int key) {
  for (Node *n = nil->next; n != nil; n = n->next) {
    if (n->key == key) {
      deleteNode(n);
      return;
    }
  }
}

void deleteFirst() { deleteNode(nil->next); }

void deleteLast() { deleteNode(nil->prev); }

int main() {
  int n;
  int key;
  char command[10];
  initNode();
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%s%d", command, &key);
    if (command[0] == 'i') {
      insert(key);
    } else if (strlen(command) > 6) {
      if (command[6] == 'F')
        deleteFirst();
      if (command[6] == 'L')
        deleteLast();
    } else {
      deleteX(key);
    }
  }

  Node *node = nil->next;
  cout << node->key;
  node = node->next;
  for (; node != nil; node = node->next) {
    cout << " ";
    cout << node->key;
  }
  cout << endl;
}