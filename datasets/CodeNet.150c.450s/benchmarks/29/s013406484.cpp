#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef struct Node{
  int key;
  Node *prev;
  Node *next;
} Node;

class DList{
public:
  DList(){
    // nil = (Node*)malloc(sizeof(Node));
    nil = new Node;
    nil->next = nil;
    nil->prev = nil;
  }
  ~DList(){
    delete nil;
  }
  void insert(int key){
    Node *x = new Node;
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
  }
  Node* listSearch(int key){
    Node *cur = nil->next;
    while(cur != nil && cur->key != key) cur = cur->next;
    return cur;
  }
  void deleteNode(Node *t){
    if(t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    delete t;
  }
  void deleteKey(int x){
    Node *t = listSearch(x);
    deleteNode(t);
  }
  void deleteFirst(){
    deleteNode(nil->next);
  }
  void deleteLast(){
    deleteNode(nil->prev);
  }
  void printList(){
    Node *cur = nil->next;
    int isf = 0;
    while(1){
      if(cur == nil) break;
      if(isf++>0) printf(" ");
      printf("%d", cur->key);
      cur = cur->next;
    }
    printf("\n");
  }

private:
  Node *nil;
};


int main(){
  int key, n;
  // int size = 0;
  char com[20];
  // int np = 0, nd = 0;
  scanf("%d", &n);
  DList dl;
  // init();
  for(int i=0; i<n; i++){
    scanf("%s%d", com, &key);
    if(com[0] == 'i'){
      dl.insert(key);
      // np++;
      // size++;
    }
    else if(com[0] == 'd'){
      if(strlen(com) > 6){
        if(com[6] == 'F') dl.deleteFirst();
        else dl.deleteLast();
      }
      else{
        dl.deleteKey(key);
        // nd++;
      }
      // size--;
    }
  }

  dl.printList();

  return 0;
}

