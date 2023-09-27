#include <iostream>
#define NIL -1

using namespace std;

struct tree{
  int l;
  int r;
  int p;
};

  tree t[10000];

void preorder(int now){
  if(now == NIL) return;
  cout << " " << now;
   preorder(t[now].l);
   preorder(t[now].r);
}

void inorder(int now){
  if(now == NIL) return;
  inorder(t[now].l);
  cout << " " << now;
  inorder(t[now].r);
}

void postorder(int now){
  if(now == NIL) return;
  postorder(t[now].l);
  postorder(t[now].r);
  cout << " " << now;
}
int main(){

  int n,e,l,r,root;
  cin >> n;
  for(int i = 0;i < n;i++)t[i].p = NIL;
  for(int i = 0;i < n;i++){
    cin >> e;
    cin >> t[e].l >> t[e].r;
    l = t[e].l;
    r = t[e].r;
    t[l].p = e;
    t[r].p = e;
  }

for(int i = 0;i < n;i++) if(t[i].p == NIL) root = i;

cout << "Preorder" << endl;
preorder(root);
cout << endl;

cout << "Inorder" << endl;
inorder(root);
cout << endl;

cout << "Postorder" << endl;
postorder(root);
cout << endl;



}