#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Node {
  int key;
  Node *prev, *next;
};

Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil -> next = nil;
  nil -> prev = nil;
}

void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x -> key = key;
  //nil- > next???NULL?????????x -> next???nil????????§??°??¶????????£?????????
  x -> next = nil -> next;
  x -> prev = nil;

  nil -> next -> prev = x;
  nil -> next = x;
}

Node* listSearch(int key) {
  Node *cur = nil -> next;
  while(cur != nil && cur -> key != key) {
    cur = cur -> next;
  }
  return cur;
}


void deleteNode(Node *t) {
  if(t == nil) {
    return;
  }
  t -> prev -> next = t -> next;
  t -> next -> prev = t -> prev;
  free(t); 
}

void deleteFirst() {
    deleteNode((nil -> next));
}

void deleteLast() {
    deleteNode(nil -> prev);
}

void deleteKey(int key) {
  deleteNode(listSearch(key));
}

int main(void) {
  init();

  int n;
  scanf("%d", &n);

  char op[10];
  int val;
  for(int i = 0; i < n; i++) {
    scanf("%s", op);
    if(op[0] == 'i') {
      scanf("%d", &val);
      insert(val);
    }
    else {
      if(strlen(op) == 6) {
        scanf("%d", &val);
        deleteKey(val);
      }
      else if(op[6] == 'F') {
        deleteFirst();
      }
      else {
        deleteLast();
      }
    }
  }

  Node *currentNode = nil -> next;
  int j = 0;
  while(true) {
    if(currentNode == nil){ 
      break;
    }
    if(j > 0) {
      cout << " ";
    }
    cout << currentNode -> key;
    j++;
    currentNode = currentNode -> next;
    deleteFirst(); 
  }
  deleteNode(nil);
  cout << endl;

  return 0;
}