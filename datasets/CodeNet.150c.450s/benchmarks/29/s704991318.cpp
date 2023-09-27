#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

struct Node {
  int key_;
  Node *prev_, *next_;
  Node() : key_(0), prev_(NULL), next_(NULL) {}
  Node(int key) : key_(key), prev_(NULL), next_(NULL) {}
};

class List {
public:

  List() : head_(NULL), tail_(NULL), size_(0) {}
  ~List() {
    for (Node *p = head_, *q = NULL; p != NULL; p = q) {
      q = p->next_;
      //fprintf(stderr, "DEBUG: deleting %d\n", p->key_);
      delete(p);
    }
  }
  void insert(int val) {
    Node* node = new Node(val);
    if (head_ == NULL) {
      // empty
      head_ = tail_ = node;
    }
    else {
      node->next_ = head_;
      head_->prev_ = node;
      head_ = node;
    }
    ++size_;
    //print();
  }
  void del(int key)
  {
    if (size_ == 0) { return; }
    for (Node *p = head_; p != NULL; ) {
      if (p->key_ != key) {
        p = p->next_;
        continue;
      }
      Node* pp = p->prev_;
      Node* pn = p->next_;
      if (pp) {
        pp->next_ = pn;
      }
      if (pn) {
        pn->prev_ = pp;
      }
      if (p == head_) { head_ = pn; }
      if (p == tail_) { tail_ = pp; }
      delete p;
      --size_;
      break;
    }
  }

  void delFirst()
  {
    if (size_ == 0) { return; }
    if (size_ == 1) {
      delete head_;
      head_ = tail_ = NULL;
      --size_;
    }
    else {
      Node *p = head_;
      head_ = head_->next_;
      delete p;
      --size_;
    }
    //print();
  }

  void delLast()
  {
    if (size_ == 0) { return; }
    if (size_ == 1) {
      delete head_;
      head_ = tail_ = NULL;
      --size_;
    }
    else {
      Node *p = tail_;
      tail_ = tail_->prev_;
      tail_->next_ = NULL;
      delete p;
      --size_;
    }
    //print();
  }

  int size() const { return size_; }
  void print()
  {
    //fprintf(stdout, "size=%d\n", size_);
    for (Node *p = head_; p != NULL; p = p->next_) {
      if (p != head_) {
        fprintf(stdout, " ");
      }
      fprintf(stdout, "%d", p->key_);
    }
    fprintf(stdout, "\n");
  }

private:
  Node *head_, *tail_;
  int size_;
};

int main()
{
  List lst;
  int n = 0;
  fscanf(stdin, "%d", &n);
  char buf[64] = { '\0' };
  for (int i = 0; i < n; ++i) {
    int key = -1;
    fscanf(stdin, "%s", buf);
    if (buf[0] == 'i') {
      fscanf(stdin, "%d", &key);
      lst.insert(key);
    }
    else if (buf[6] == '\0') {
      fscanf(stdin, "%d", &key);
      lst.del(key);
    }
    else if (buf[6] == 'F') {
      lst.delFirst();
    }
    else if (buf[6] == 'L') {
      lst.delLast();
    }
  }
  lst.print();
  return 0;
}