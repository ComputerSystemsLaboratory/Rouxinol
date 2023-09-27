#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

struct Node{
  int key;
  Node *prev, *next;
};

Node *nil;

void initiation(){
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}

void insert(int x){
  Node *a = (Node *)malloc(sizeof(Node));
  a->key = x;
  a->next = nil->next;
  nil->next->prev = a;
  a->prev = nil;
  nil->next = a;
}

void delete1(Node *cur){
  if(cur == nil){return;}
  cur->prev->next = cur->next;
  cur->next->prev = cur->prev;
  free(cur);
}

Node *listserch(int x){
  Node *cur = nil->next;
  while(cur != nil && cur->key != x){
    cur = cur->next;
  }
  return cur;
}




int main(){

  int size;

  cin >> size;

  //char *inst = new char[100];

  string inst;
  int x;

  initiation();


  for(int i = 0; i < size; i++){

    cin >> inst;

    if(inst == "insert"){
      cin >> x;
      insert(x);
    }
    else if(inst == "delete"){
      cin >> x;
      delete1(listserch(x));
    }
    else if(inst == "deleteFirst"){
      delete1(nil->next);
    }
    else if(inst == "deleteLast"){
      delete1(nil->prev);
    }

    /*Node *cur = nil->next;

    while(cur != nil){
      if(cur == nil->next){
        cout << cur->key;
      }
      else{
        cout << ' ' << cur->key;
      }
      cur = cur->next;
    }

    cout << endl;*/
  }

  Node *cur = nil->next;

  while(cur != nil){
    if(cur == nil->next){
      cout << cur->key;
    }
    else{
      cout << ' ' << cur->key;
    }
    cur = cur->next;
  }

  cout << endl;

  return 0;
}

