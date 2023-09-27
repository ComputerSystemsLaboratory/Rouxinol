#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

namespace {

class List {
 private:
  struct Node {
    size_t x;
    Node* next;
    Node* prev;
  };

 public:
  List() : nil_(new Node) {
    nil_->next = nil_;
    nil_->prev = nil_;
  }

  ~List() {
    Node* n = nil_->next;
    while (n != nil_) {
      Node* cur = n;
      n = cur->next;
      delete cur;
    }

    if (nil_)
      delete nil_;
  }

  void Print() const {
    for (Node* n = nil_->next; n != nil_; n = n->next) {
      if (n != nil_->next) printf(" ");
      printf("%lu", n->x);
    }
    printf("\n");
  }

  void Insert(size_t x) {
    Node* n = new Node;
    n->x = x;
    n->next = nil_->next;
    // Node is created in the beginning, the operation
    // initialize the last node since nil_->next is nil_,
    // and nil_->prev is the last node.
    n->next->prev = n;

    nil_->next = n;
    n->prev = nil_;
  }

  void Delete(size_t x) {
    Node* n = Find(x);
    if (!n) {
      return;
    }
    DeleteNode(n);
  }

  void DeleteFirst() {
    DeleteNode(nil_->next);
  }

  void DeleteLast() {
    DeleteNode(nil_->prev);
  }

 private:
  void DeleteNode(Node* n) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    delete n;
  }

  Node* Find(size_t x) {
    Node* n = nil_->next;
    for (; n != nil_; n = n->next) {
      if (n->x == x) {
        return n;
      }
    }
    return NULL;
  }

  // nil_ is a node for sentinel, but the next
  // and prev have the following roles:
  // nil_->next is the first node in the list
  // nil_->prev is the last node in the list.
  Node* nil_;
};

} // namespace

int main() {
  int n;
  cin >> n;

  char b[16];
  string op;
  op.reserve(16);
  size_t x = 0;

  List list;
  for (int i = 0; i < n; ++i) {
    scanf("%s", b);
    op = b;

    if (op == "insert") {
      scanf("%lu", &x);
      list.Insert(x);
    } else if (op == "delete") {
      scanf("%lu", &x);
      list.Delete(x);
    } else if (op == "deleteFirst") {
      list.DeleteFirst();
    } else {
      list.DeleteLast();
    }
  }
  list.Print();
  return 0;
}