#include <iostream>
using namespace std;

int P[10010];
void init(int N);
int root(int a);
bool is_same_set(int a,int b);
void unite(int a,int b);

int main() {
  int N,Q;
  cin >> N >> Q;
  init(N);
  for (int i=0;i<Q;++i) {
    int com,x,y;
    cin >> com >> x >> y;
    if (com==0)
      unite(x,y);
    else {
      if (is_same_set(x,y)==true)
	cout << 1 << endl;
      else
	cout << 0 << endl;
    }
  }
}

void init(int N) {
  for (int i=0;i<=N;++i) P[i] = i;
}

int root(int a) {
  if (P[a] == a) return a;
  return (P[a] = root(P[a]));
}

bool is_same_set(int a,int b) {
  return root(a)==root(b);
}

void unite(int a,int b) {
  P[root(a)] = root(b);
}