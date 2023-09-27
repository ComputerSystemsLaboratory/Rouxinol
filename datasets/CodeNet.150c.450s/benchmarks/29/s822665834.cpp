#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node {
private:
  T data;
  Node<T> *prev;
  Node<T> *next;
public:
  Node() {
    data = -1;
    prev = NULL;
    next = NULL;
  }
  ~Node() {
    if (prev) {
      prev->setNext(next);
    }
    if (next) {
      next->setPrev(prev);
    }
  }
  T getData() {
    return data;
  }
  void setData(T val) {
    data = val;
  }
  Node<T> *getPrev() {
    return prev;
  }
  Node<T> *getNext() {
    return next;
  }
  void setPrev(Node<T> *node) {
    prev = node;
  }
  void setNext(Node<T> *node) {
    next = node;
  }
  void insertBefore(Node<T> *node) {
    prev = node->getPrev();
    next = node;

    if (node->getPrev()) {
      node->getPrev()->setNext(this);
    }
    node->setPrev(this);
  }
  void insertAfter(Node<T> *node) {
    prev = node;
    next = node->getNext();

    if (node->getNext()) {
      node->getNext()->setPrev(this);
    }
    node->setNext(this);
  }
};

int main() {
  int n, x;
  bool f;
  string s;
  Node<int> *root, *first, *tmp;

  root = new Node<int>;
  root->setNext(root);
  root->setPrev(root);

  cin >> n;

  while (n--) {
    cin >> s;
    if (s == "insert") {
      cin >> x;
      tmp = new Node<int>;
      tmp->setData(x);
      tmp->insertAfter(root);
    } else if (s == "delete") {
      cin >> x;
      tmp = root;
      f = false;
      while (tmp->getNext() != root) {
        tmp = tmp->getNext();
        if (tmp->getData() == x) {
          f = true;
          break;
        }
      }
      if (f) {
        delete tmp;
      }
    } else if (s == "deleteFirst") {
      delete root->getNext();
    } else if (s == "deleteLast") {
      delete root->getPrev();
    }
  }

  tmp = root;
  while (1) {
    if (tmp->getNext() == root) {
      break;
    }
    tmp = tmp->getNext();
    if (tmp->getNext() == root) {
      cout << tmp->getData();
    } else {
      cout << tmp->getData() << ' ';
    }
  }
  cout << endl;

  return 0;
}