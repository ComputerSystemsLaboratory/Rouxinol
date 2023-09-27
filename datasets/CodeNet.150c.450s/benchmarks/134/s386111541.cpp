#include <iostream>
using namespace std;

static const int maxn=10000;

struct Node {
  int p,l,r;
};

Node T[maxn];

void preParse(int u) {
  if (u==(-1)) {
    return ;
  }
  cout<<" "<<u<<flush;
  preParse(T[u].l);
  preParse(T[u].r);
}
void inParse(int u) {
  if (u==(-1)) {
    return ;
  }
  inParse(T[u].l);
  cout<<" "<<u<<flush;
  inParse(T[u].r);
}
void postParse(int u) {
  if (u==(-1)) {
    return ;
  }
  postParse(T[u].l);
  postParse(T[u].r);
  cout<<" "<<u<<flush;
}

int main() {
  std::ios::sync_with_stdio(false);
  cout.tie(0);
  cin.tie(0);
  int n;
  cin>>n;
  for (int i=0; i<n; i++) {
    T[i].p=(-1);
  }
  for (int i=0; i<n; i++) {
    int v,l,r;
    cin>>v>>l>>r;
    T[v].l=l;
    T[v].r=r;
    if (l!=(-1)) {
      T[l].p=v;
    }
    if (r!=(-1)) {
      T[r].p=v;
    }
  }
  int root=0;
  for (int i=0; i<n; i++) {
    if (T[i].p==(-1)) {
      root=i;
    }
  }
  cout<<"Preorder"<<endl;
  preParse(root);
  cout<<endl;
  cout<<"Inorder"<<endl;
  inParse(root);
  cout<<endl;
  cout<<"Postorder"<<endl;
  postParse(root);
  cout<<endl;
  return 0;
}
