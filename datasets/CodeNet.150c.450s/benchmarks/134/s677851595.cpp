#include <iostream>
using namespace std;

constexpr int MAX=10000;
constexpr int NIL=-1;

struct Node{
   int left;
   int right;
   int parent;
};

Node node[MAX];

void preorder(int u){
   if(u==NIL) return;
   cout << " " << u;
   preorder(node[u].left);
   preorder(node[u].right);
}

void inorder(int u){
   if(u==NIL) return;
   inorder(node[u].left);
   cout << " " << u;
   inorder(node[u].right);
}

void postorder(int u){
   if(u==NIL) return;
   postorder(node[u].left);
   postorder(node[u].right);
   cout << " " << u;
}

int main(){
   int left, right, root, value, n;
   cin >> n;
   for(int i=0; i<n; i++){
      node[i].parent=NIL;
   }

   for(int i=0; i<n; i++){
      cin >> value >> left >> right;
      node[value].left=left;
      node[value].right=right;
      if(left!=NIL) node[left].parent=value;
      if(right!=NIL) node[right].parent=value;
   }

   for(int i=0; i<n; i++) if(node[i].parent==NIL) root=i;

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

