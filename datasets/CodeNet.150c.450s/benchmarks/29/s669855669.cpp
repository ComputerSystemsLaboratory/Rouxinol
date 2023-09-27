#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

namespace {

struct Node {
  size_t x;
  Node* next;
  Node* prev;
};

class List {
 public:
  List() : first_(NULL), last_(NULL) {}
  ~List() {
    Node* n = first_;
    while (n != NULL) {
      Node* cur = n;
      n = cur->next;
      delete cur;
    }
  }

  void Print() const {
    for (Node* n = first_; n; n = n->next) {
      if (n != first_) printf(" ");
      printf("%lu", n->x);
    }
    printf("\n");
  }

  void Insert(size_t x) {
    if (!first_) {
      Node* n = new Node;
      n->x = x;
      n->next = NULL;
      n->prev = NULL;
      first_ = n;
      last_ = n;
      return;
    }

    Node* n = new Node;
    n->prev = NULL;
    n->x = x;
    n->next = first_;
    first_->prev = n;
    first_ = n;
  }

  void Delete(size_t x) {
    for (Node* n = first_; n; n = n->next) {
      if (n->x != x) {
        continue;
      }
      if (n == first_) {
        DeleteFirst();
        break;
      }
      if (n == last_) {
        DeleteLast();
        break;
      }
      Node* prev = n->prev;
      Node* next = n->next;
      prev->next = next;
      // Last node
      if (next) {
        next->prev = prev;
      } else {
        last_ = prev;
      }
      delete n;
      break;
    }
  }

  void DeleteFirst() {
    if (!first_) {
      return;
    }
    Node* next = first_->next;
    delete first_;
    first_ = next;
    if (next) {
      next->prev = NULL;
    } else {
      last_ = NULL;
    }
  }

  void DeleteLast() {
    if (!last_) {
      return;
    }
    Node* prev = last_->prev;
    delete last_;
    last_ = prev;
    if (prev) {
      prev->next = NULL;
    } else {
      first_ = NULL;
    }
  }

 private:
  Node* first_;
  Node* last_;
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