#include <algorithm>
#include <bitset>
#include <cmath>
#include <ctime>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(a) begin(a),end(a)
typedef long long ll;
typedef pair<int,int> P;
const int inf=1e+9;
const ll mod=1000000007;
const double PI=3.14159265358979323846;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
ll gcd(ll a, ll b){
  if (b==0) return a;
  else return gcd(b,a%b);
}
int cans(bool f){
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#define NIL -1
#define MAX 100005

struct Node{
  int p,l,r;
};


Node T[MAX];
int n,D[MAX],H[MAX];



void setDepth(int u, int d) {
  if(u == NIL) return;
  D[u] = d;
  setDepth(T[u].r,d+1);
  setDepth(T[u].l,d+1);
}

int setHeight(int u) {
  int h1=0, h2=0;
  if(T[u].r != NIL) h1 = setHeight(T[u].r) + 1;
  if(T[u].l != NIL) h2 = setHeight(T[u].l) + 1;
  return H[u] = max(h1,h2);
}

int getSibling(int u) {
  if(T[u].p == NIL) return NIL;
  if(T[T[u].p].l != u && T[T[u].p].l != NIL) return T[T[u].p].l;
  if(T[T[u].p].r != u && T[T[u].p].r != NIL) return T[T[u].p].r;
  return NIL;
}


void print(int u) {
  printf("node %d: ",u);
  printf("parent = %d, ",T[u].p);
  printf("sibling = %d, ",getSibling(u));
  int deg = 0;
  if(T[u].r != NIL) deg++;
  if(T[u].l != NIL) deg++;
  printf("degree = %d, ",deg);
  printf("depth = %d, ",D[u]);
  printf("height = %d, ",H[u]);
  
  if(T[u].p == NIL) printf("root\n");
  else if(T[u].r == NIL && T[u].l == NIL) printf("leaf\n");
  else printf("internal node\n");
}


void preParse(int u) {
  if(u == NIL) return;
  printf(" %d",u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u) {
  if(u == NIL) return;
  inParse(T[u].l);
  printf(" %d",u);
  inParse(T[u].r);
}
void postParse(int u) {
  if(u == NIL) return;
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d",u);
}


int main() {
  int v,l,r;
  int N;
  cin >> N;
  rep(i,N) T[i].l = T[i].r = T[i].p = NIL;
  rep(i,N) {
    cin >> v >> l >> r;
    T[v].l = l;
    T[v].r = r;
    if(l != NIL) T[l].p = v;
    if(r != NIL) T[r].p = v;
  }
  int root; 
  rep(i,N) if(T[i].p == NIL) root = i;
  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;
  return 0;
}




