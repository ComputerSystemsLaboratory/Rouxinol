#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *prev, *next;
};

Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil -> prev = nil;
  nil -> next = nil;
}

Node *searchList(int key) {
  for (Node *cur = nil -> next; cur != nil; cur = cur -> next) {
    if(cur -> key == key) return cur;
  }
  return nil;
}

void insert(int key) {
  Node *n = (Node *)malloc(sizeof(Node));
  n -> key = key;
  n -> next = nil -> next;
  n -> prev = nil;
  nil -> next -> prev = n;
  nil -> next = n;
}

void deleteNode(Node *n) {
  if(n == nil) return;

  n -> prev -> next = n -> next;
  n -> next -> prev = n -> prev;

  free(n);
}

void deleteFirstNodeWithKey(int key) {
  deleteNode(searchList(key));
}

void deleteFirst() {
  deleteNode(nil -> next);
}

void deleteLast() {
  deleteNode(nil -> prev);
}

void printList() {
  for (Node *cur = nil -> next; cur != nil; cur = cur -> next) {
    printf("%d", cur -> key);
    if(cur != nil -> prev) {
      printf(" ");
    }
  }
  puts("");
}

int main() {
  int n;
  scanf("%d", &n);
  init();
  for(int i = 0; i < n; i++) {
    char cmd[20];
    int key;
    scanf("%s%d", cmd, &key);

    if(cmd[0] == 'i') { // insert
      insert(key);
      continue;
    }

    if(strlen(cmd) == 6) { // delete
      deleteFirstNodeWithKey(key);
      continue;
    }

    if(cmd[6] == 'F') { //deleteFirst
      deleteFirst();
      continue;
    }

    { // deleteLast
      deleteLast();
      continue;
    }


  }

  printList();
}