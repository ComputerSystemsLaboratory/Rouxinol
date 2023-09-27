#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Node {
 public:
  Node *prev;
  Node *next;
  int value;
  Node(int value) {
    this->value = value;
    prev = NULL;
    next = NULL;
  }
};

class LinkedList {
  Node *first;
  Node *last;
  int count;
 public:
  void insert(int x);
  void find_delete(int x);
  void deleteFirst();
  void deleteLast();
  void show();
  LinkedList();
};

LinkedList::LinkedList() {
  first = NULL;
  last = NULL;
  count = 0;
}

void LinkedList::insert(int x) {
  Node *node = new Node(x);
  if (count == 0) {
    last = node;
    first = node;
  } else {
    first->prev = node;
    node->next = first;
    node->prev = NULL;
    first = node;
  }
  count++;
}

void LinkedList::find_delete(int x) {
  Node *ptr = first;
  while (ptr != NULL) {
    if (ptr->value == x) {
      Node *prev = ptr->prev;
      Node *next = ptr->next;
      if (prev != NULL) {
        prev->next = next;
      }
      if (next != NULL) {
        next->prev = prev;
      }
      if (ptr == first) {
        first = next;
      }
      if (ptr == last) {
        last = prev;
      }
      delete ptr;
      count--;
      break;
    }
    ptr = ptr->next;
  }
}

void LinkedList::deleteFirst() {
  Node *tmp = first;
  first = tmp->next;
  if (first != NULL) {
    first->prev = NULL;
  }
  delete tmp;
  count--;
}

void LinkedList::deleteLast() {
  Node *tmp = last;
  last = tmp->prev;
  if (last != NULL) {
    last->next = NULL;
  }
  delete tmp;
  count--;
}

void LinkedList::show() {
  Node *ptr = first;
  while (ptr != last) {
    cout << ptr->value << " ";
    ptr = ptr->next;
  }
  cout << ptr->value << endl;
}

int main() {
  int N;
  scanf("%d", &N);
  char operation[20];
  int key;
  LinkedList list;
  for (int i = 0; i < N; ++i) {
    scanf("%s%d", operation, &key);
    if (operation[0] == 'i') {
      list.insert(key);
    } else if (operation[6] == 'F') {
      list.deleteFirst();
    } else if (operation[6] == 'L') {
      list.deleteLast();
    } else {
      list.find_delete(key);
    }
  }
  list.show();
}