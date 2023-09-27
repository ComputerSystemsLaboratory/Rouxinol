#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct Node {
  int key;
  Node *next, *prev;
};

Node *nil;

void init() {
  nil = new Node;
  nil->prev = nil;
  nil->next = nil;
}

void insert(int key) {
  Node *node = new Node;
  node->key = key;

  nil->next->prev = node;
  node->next = nil->next;
  node->prev = nil;
  nil->next = node;
}

void deleteKey(int key) {
  Node *node = nil->next;
  while(node != nil) {
    if(node->key == key) {
      node->next->prev = node->prev;
      node->prev->next = node->next;
      delete node;
      break;
    }
    else node = node->next;
  }
}

void deleteFirst() {
  Node *node = nil->next;
  if(node == nil) return;

  nil->next = node->next;
  node->next->prev = nil;
  delete node;
}

void deleteLast() {
  Node *node = nil->prev;
  if(node == nil) return;

  nil->prev = node->prev;
  node->prev->next = nil;
  delete node;
}

void show() {
  Node *node = nil->next;
  while(node != nil) {
    cout << node->key << (node->next == nil ? '\n' : ' ');
    node = node->next;
  }
}

void clear() {
  while(nil->next != nil) {
    deleteFirst();
  }
}

int main() {
  init();

  string o;
  int k;
  int n;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> o;
    if(o == "deleteFirst") {
      deleteFirst();
    }
    else if(o == "deleteLast") {
      deleteLast();
    }
    else if(o == "insert") {
      cin >> k;
      insert(k);
    }
    else {
      cin >> k;
      deleteKey(k);
    }
  }

  show();
  clear();
}