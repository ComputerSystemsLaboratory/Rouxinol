#include <cstdio>
#include <cstdlib>
#include <cstring>

typedef struct tag{
  int key;
  struct tag *prev, *next;
} Node;

Node *nil;

void init(){
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int key){
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

Node* listSearch(int key){
  Node *cur = nil->next;
  while(cur != nil && cur->key != key){
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node *t){
  if(t != nil){
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
  }
}

void deleteFirst(){
  deleteNode(nil->next);
}

void deleteLast(){
  deleteNode(nil->prev);
}

void deleteKey(int key){
  deleteNode(listSearch(key));
}

void printList(){
  Node *cur = nil->next;
  int isf = 0;
  while(cur != nil){
    if(isf++ > 0){
      printf(" ");
    }
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

int main(void) {
  int key, n, i;
  char cmd[20];

  scanf("%d", &n);
  init();
  for(i = 0; i < n; i++){
    scanf("%s", cmd);
    if(cmd[0] == 'i'){
      scanf("%d", &key);
      insert(key);
    }else if(cmd[0] == 'd'){
      if(strlen(cmd) > 6){
        if(cmd[6] == 'F') deleteFirst();
        else if(cmd[6] == 'L') deleteLast();
      } else {
        scanf("%d", &key);
        deleteKey(key);
      }
    }
  }

  printList();
  return 0;
}