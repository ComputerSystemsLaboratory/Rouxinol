#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
#include <memory>
#include <queue>
using namespace std;

struct Node {
  int elm;
  Node* next;
  Node* prev;

  // Node() :
  //   elm(0), next(nullptr), prev(nullptr) {}
};

Node* nil;

void init() {
  nil = new Node();
  nil->next = nil;
  nil->prev = nil;
}

void insert(const int& key) {
  Node* x = new Node();
  x->elm = key;

  // 番兵の直後に要素を追加
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* list_search(const int& key) {
  Node* current = nil->next; // 番兵の次の要素から辿る
  while(current != nil && current->elm != key) {
    current = current->next;
  }
  return current;
}

void delete_node(Node* t) {
  if(t == nil) return;

  t->prev->next = t->next;
  t->next->prev = t->prev;
  delete t;
}

void delete_first() {
  delete_node(nil->next);
}

void delete_last() {
  delete_node(nil->prev);
}

void print_list() {
  Node* cur = nil->next;
  int isf = 0;
  while(true) {
    if(cur == nil) break;
    if(isf++ > 0) printf(" ");
    printf("%d", cur->elm);
    cur = cur->next;
  }
  printf("\n");
}

int main() {
  int n;
  cin >> n;
  string command; int elm;
  init();

  for(int i = 0; i < n; i++) {
    cin >> command;
    if(command == "insert") {
      cin >> elm;
      insert(elm);
    } else if(command == "deleteFirst") {
      delete_first();
    } else if(command == "deleteLast") {
      delete_last();
    } else if(command == "delete") {
      cin >> elm;
      delete_node(list_search(elm));
    }
  }
  print_list();
}


