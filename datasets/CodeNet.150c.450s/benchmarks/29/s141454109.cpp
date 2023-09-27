#include <iostream>
using namespace std;

class Node {
    friend class List;
private:
    int num;
    Node *prev;
    Node *next;
public:
    Node(int n, Node *x, Node *y);
};

class List{
private:
    Node *head;
    Node *tail;
public:
    List();
    void Insert(int x);
    void Delete(int x);
    void deleteFirst();
    void deleteLast();
    void Print();
};

Node::Node(int n, Node *x, Node *y) {
  num = n;
  prev = x;
  next = y;
}

List::List() {
  head = NULL;
  tail = NULL;
}

void List::Insert(int x) {
  if(head == NULL) {
    head = new Node(x, NULL, head);
    tail = head;
    return;
  }
  Node *p = head;
  head = new Node(x, NULL, head);
  p->prev = head;
}

void List::Delete(int x) {
  Node *p;
  if(head == NULL)
    return;
  if(head->num == x) {
    deleteFirst();
    return;
  }

  for(p = head; p->num != x; p = p->next) {
    if(p->next == NULL)
      return;
  }
  if(p == tail) {
    deleteLast();
    return;
  }
  p->next->prev = p->prev;
  p->prev->next = p->next;
  delete p;
}

void List::deleteFirst() {
  Node *p = head;
  if(head == tail) {
    head = NULL;
    tail = NULL;
  }
  else
    head = head->next;
  delete p;
}

void List::deleteLast() {
  Node *p = tail;
  if(tail == head){
    head = NULL;
    tail = NULL;
  }
  else {
    tail = tail->prev;
    tail->next = NULL;
  }
  delete p;
}

void List::Print() {
  for(Node *p = head; p != NULL; p=p->next) {
    if(p != head)
      printf(" ");
    printf("%d", p->num);
  }
  printf("\n");
}

int main() {
  List l;
  int n, num;
  char command[20];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%s", command);
    if(command[0] == 'i') {
      scanf("%d", &num);
      l.Insert(num);
    }
    else if(command[0] == 'd') {
      if (command[6] == 'F')
        l.deleteFirst();
      else if (command[6] == 'L')
        l.deleteLast();
      else {
        scanf("%d", &num);
        l.Delete(num);
      }
    }
  }
  l.Print();

  return 0;
}