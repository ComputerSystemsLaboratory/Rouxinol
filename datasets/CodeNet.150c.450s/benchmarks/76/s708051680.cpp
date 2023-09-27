#include <iostream>
using namespace std;

struct Node{
   int key;
   Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
   Node *y=NIL;
   Node *x=root;
   Node *z=new Node;

   z->key=k;
   z->left=NIL;
   z->right=NIL;

   while(x!=NIL){
      y=x;
      if(z->key < x->key) x=x->left;
      else x=x->right;
   }
   
   z->parent=y;
   if(y==NIL) root=z;
   else{
      if(z->key<y->key) y->left=z;
      else y->right=z;
   }
}

Node *find(Node *u, int k){
   while(u!=NIL && k!=u->key){
      if(k<u->key) u=u->left;
      else u=u->right;
   }
   return u;
}

void inorder(Node *u){
   if(u==NIL) return;
   inorder(u->left);
   cout << " " << u->key;
   inorder(u->right);
}

void preorder(Node *u){
   if(u==NIL) return;
   cout << " " << u->key;
   preorder(u->left);
   preorder(u->right);
}

int main(){
   int n, x;
   string com;
   cin >> n;

   for(int i=0; i<n; i++){
      cin >> com;
      if(com=="insert"){
         cin >> x;
         insert(x);
      }
      else if(com=="print"){
         inorder(root);
         cout << endl;
         preorder(root);
         cout << endl;
      }
      else if(com[0]=='f'){
         cin >> x;
         Node *t=find(root, x);
         if(t!=NIL) cout << "yes" << endl;
         else cout << "no" << endl;
      }
   }

   return 0;
}
