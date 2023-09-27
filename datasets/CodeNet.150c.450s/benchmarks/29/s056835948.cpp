#include <cstdlib>
#include <cstring>
#include <cstdio>

struct Node {

  int key;
  Node *prev, *next;
};

struct Node *nil;


void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key) {
  //insert element at the beginning of the list
  
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;  //diagram 4.10 on textbook
  x->next = nil->next;
  x->next->prev = x;
  
  nil->next = x;
  x->prev = nil;

}

Node* listSearch(int key) {

  Node *cur = nil->next;
  while (cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node *t) {
  if (t == nil) return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
  free(t);
}

void deleteFirst() {
  deleteNode(nil->next);
}

void deleteLast() {
  deleteNode(nil->prev);
}

void deleteKey(int key) {
  deleteNode(listSearch(key));
}

void printlist() {
  Node* cur = nil->next;
  while (cur != nil) {
    if (cur->next == nil) printf("%d", cur->key);
    else printf("%d ", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

int main() {

  int N;
  scanf("%d", &N);
  int L = 1000000;

  //Node[L];
  init();
  for (int i = 0; i < N; i++) {
    char cmd[100];
    int key;

    scanf("%s%d", cmd, &key);

    if (cmd[0] == 'i') insert(key);

    else if (cmd[0] == 'd') {
      if (strlen(cmd) == 6) deleteKey(key);
      else if (strlen(cmd) > 6) {
	if (cmd[6] == 'F') deleteFirst();
	else if (cmd[6] == 'L') deleteLast();
      }
    }
  }
      
  printlist();
}