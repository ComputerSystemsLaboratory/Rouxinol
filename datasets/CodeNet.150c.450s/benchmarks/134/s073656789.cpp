#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;

struct Node
{
  int parent, l_child, r_child;
};

Node Point[26];


void Preorder(int root){
  if(root == -1) return;
  cout << " " << root;
  Preorder(Point[root].l_child);
  Preorder(Point[root].r_child);
}

void Inorder(int root){
  if(root == -1) return;
  Inorder(Point[root].l_child);
  cout << " " << root;
  Inorder(Point[root].r_child);
}

void Postorder(int root){
  if(root == -1) return;
  Postorder(Point[root].l_child);
  Postorder(Point[root].r_child);
  cout << " " << root;  
}



int main(){
  int n, node, l, r, root;
  cin >> n;
  rep(i,n) Point[i].parent = Point[i].l_child = Point[i].r_child = -1;
  rep(i,n){
    cin >> node >> l >> r;
    Point[node].l_child = l;
    Point[node].r_child = r;
    if(l != -1) Point[l].parent = node;
    if(r != -1) Point[r].parent = node;
  }
  rep(i,n) if(Point[i].parent == -1) root = i;
  //Preorder
  cout << "Preorder" << endl;
  Preorder(root);
  cout << endl;
  //Inorder
  cout << "Inorder" << endl;
  Inorder(root);
  cout << endl;
  //Postorder
  cout << "Postorder" << endl;
  Postorder(root);
  cout << endl;

return 0;
}
