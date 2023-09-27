#include <iostream>
#include <string>
using namespace std;

class Node {
  public:
    Node* prev;
    Node* next;
    int value;
};

class DoublyLinkedList {
  private:
    Node* first;
  public:
    DoublyLinkedList() {
      first = NULL;
    }
    void insert(int n);
    void deleteN(int n);
    void deleteFirst();
    void deleteLast();
    bool isEmpty();
    void print();
};

void DoublyLinkedList::insert(int n) {
  Node* node = new Node();
  node->value = n;

  if (isEmpty()){
    first = node;
    node->prev = node;
    node->next = node;
  } else {
    node->prev = first->prev;
    node->next = first;
    first->prev->next = node;
    first->prev = node;
    first = node;
  }
}

void DoublyLinkedList::deleteN(int n) {
  if (isEmpty()) return;
  Node* node = first;
  do {
    if (node->value == n) {
      if (node == first) {
        if (node->next == node) {
          first = NULL;
        } else {
          node->prev->next = node->next;
          node->next->prev = node->prev;
          first = node->next;
        }
      } else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
      }
      break;
    }
    node = node->next;
  } while (node != first);
}

void DoublyLinkedList::deleteFirst() {
  if (isEmpty()) return;
  if (first->next == first) {
    first = NULL;
    return;
  }
  first->next->prev = first->prev;
  first->prev->next = first->next;
  first = first->next;
}

void DoublyLinkedList::deleteLast() {
  if (isEmpty()) return;
  Node* last = first->prev;
  if (last == first) {
    first = NULL;
    return;
  }
  last->prev->next = first;
  first->prev = last->prev;
}

bool DoublyLinkedList::isEmpty() {
  return first == NULL;
}

void DoublyLinkedList::print() {
  if (isEmpty()) return;
  Node* node = first;
  while (true) {
    cout << node->value;
    node = node->next;
    if (node == first) break;
    cout << ' ';
  }
  cout << endl;
}

int main() {
  int n;
  string command;
  int value;
  DoublyLinkedList* list = new DoublyLinkedList();

  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> command;
    if (command == "insert") {
      cin >> value;
      list->insert(value);
    } else if (command == "delete") {
      cin >> value;
      list->deleteN(value);
    } else if (command == "deleteFirst") {
      list->deleteFirst();
    } else if (command == "deleteLast") {
      list->deleteLast();
    }
  }

  list->print();

  return 0;
}