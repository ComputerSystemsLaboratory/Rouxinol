#include <iostream>
#include <cstdio>
using namespace std;

typedef int data_t;

typedef struct tag_node {
  tag_node *before_;
  data_t    data_;
  tag_node *next_;
} node_t;

class List
{
  node_t *head_;
  node_t *FindNodeFromBefore(data_t) const;
  node_t *FindLastNode(void) const;
public:
  List(void);
  void Insert(data_t);
  int Delete(data_t);
  int DeleteFirst(void);
  int DeleteLast(void);
  int Print(void) const;
};

List::List(void) {
  head_ = new node_t;
  head_->before_ = head_;
  head_->next_   = head_;
}

node_t *List::FindNodeFromBefore(data_t findData) const {
  node_t *tmp;

  for (tmp = head_->next_; tmp != head_; tmp = tmp->next_) {
    if (tmp->data_ == findData) return tmp;
  }

  return tmp;
}

node_t *List::FindLastNode(void) const {
  node_t *tmp;

  for (tmp = head_->next_; tmp->next_ != NULL; tmp = tmp->next_) ;

  return tmp;
}

void List::Insert(data_t data) {
  node_t *node = new node_t;

  node->data_ = data;

  node->next_ = head_->next_;
  head_->next_->before_ = node;
  head_->next_ = node;
  node->before_ = head_;
}

int List::Delete(data_t data) {
  node_t *target = FindNodeFromBefore(data);

  if (target == head_) return 1;

  target->before_->next_ = target->next_;
  target->next_->before_ = target->before_;

  delete target;

  return 0;
}

int List::DeleteFirst(void) {
  node_t *target = head_->next_;
  if (target == head_) return 1;

  target->before_->next_ = target->next_;
  target->next_->before_ = target->before_;

  delete target;
}

int List::DeleteLast(void) {
  node_t *target = head_->before_;

  if (target == head_) return 1;

  target->before_->next_ = target->next_;
  target->next_->before_ = target->before_;

  delete target;
}

int List::Print(void) const {
  if (head_->next_ == head_) return 1;

  node_t *tmp;

  for (tmp = head_->next_; tmp != head_; tmp = tmp->next_) {
    if (tmp != head_->next_) cout << " ";
    cout << tmp->data_;
  }
  cout << endl;

  return 0;
}

int main(void)
{
  int n;
  data_t value;
  char command[12];
  List list;

  scanf("%d%*c", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s%*c", command);

    if (command[0] == 'i') {
      scanf("%d%*c", &value);
      list.Insert(value);
      continue;
    }
    switch(command[6]) {
    case 'F':
      list.DeleteFirst();
      continue;
    case 'L':
      list.DeleteLast();
      continue;
    default:
      scanf("%d%*c", &value);
      list.Delete(value);
      continue;
    }
  }
  list.Print();

  return 0;
}