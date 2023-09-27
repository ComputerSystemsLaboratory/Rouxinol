#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

struct node {
  int key;
  node *prev, *next;
};

node *head, head_s, *tail, tail_s;

void insert(int x) {
  node *next = head->next;
  node *nd = new node;
  nd->key = x;
  nd->next = next;
  nd->prev = head;

  next->prev = nd;
  head->next = nd;
}

void del_node(node *nd) {
  if (nd == head || nd == tail) return;
  node *next = nd->next;
  node *prev = nd->prev;
  prev->next = next;
  next->prev = prev;
  delete nd;
}

void del(int x) {
  for (node *nd = head->next; nd != tail; nd = nd->next) {
    if (nd->key == x) {
      del_node(nd);
      return;
    }
  }
}

void del_first() { del_node(head->next); }
void del_last() { del_node(tail->prev); }

void init_root() {
  head = &head_s;
  tail = &tail_s;
  head->next = tail;
  head->prev = head;
  tail->next = tail;
  tail->prev = head;
}

int main(int argc, char **argv)
{
  init_root();
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char buf[32];
    int x;
    scanf("%s", buf);
    string cmd(buf);
    if (cmd == "insert") {
      scanf("%d", &x);
      insert(x);
    } else if (cmd == "delete") {
      scanf("%d", &x);
      del(x);
    } else if (cmd == "deleteFirst") {
      del_first();
    } else if (cmd == "deleteLast") {
      del_last();
    }
  }

  const char *sp = "";
  for (auto nd = head->next; nd != tail; nd = nd->next) {
    printf("%s%d", sp, nd->key);
    sp = " ";
  }
  putchar('\n');

  return 0;
}