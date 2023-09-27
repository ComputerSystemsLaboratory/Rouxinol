#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

const int INF = 1 << 29;
const double EPS = 1e-9;
const int MOD = 100000007;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};
struct Node {
  int key;
  Node *prev, *next;
  ~Node() { cerr << "delete" << this << endl; }
};
Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}
void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}
Node *listSearch(int key) {
  Node *cur = nil->next;
  while (cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}

void deleteNode(Node *t) {
  if (t == nil)
    return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
  free(t);
}
void deleteFirst() { deleteNode(nil->next); }
void deleteLast() { deleteNode(nil->prev); }

void deleteKey(int key) { deleteNode(listSearch(key)); }
void printList() {
  Node *cur = nil->next;
  int isf = 0;
  while (true) {
    if (cur == nil)
      break;
    if (isf++ > 0) {
      printf(" ");
    }
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
  return ;
}
int main() {
  int N;
  cin >> N;
  init();
  char buf[20];
  for (int i = 0; i < N; i++) {
    string str;
    int x;
    scanf("%s", buf);

    if (buf[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }else if(strlen(buf) <= 6){
      scanf("%d", &x);
      deleteKey(x);
    }else if(buf[0] == 'd' && buf[6] == 'F'){
      deleteFirst();
    }else if(buf[0] == 'd' && buf[6] == 'L'){
      deleteLast();
    }
  }
  printList();
}