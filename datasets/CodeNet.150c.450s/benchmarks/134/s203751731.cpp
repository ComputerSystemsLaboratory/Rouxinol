#include<iostream>
using namespace std;
struct Node{
   int parent,left,right;
};
const int NIL = -1;

void Preorder(Node A[], int n, int root) {
    if ( root != NIL ) {
    cout<<" "<<root;
    Preorder( A, n, A[root].left);
    Preorder( A, n, A[root].right);
   }
}
void Inorder(Node A[], int n, int root) {
     if ( A[root].left != NIL )     Inorder( A, n, A[root].left);
      cout<<" "<<root;
     if ( A[root].right != NIL )  Inorder( A, n, A[root].right);
}

void Postorder(Node A[], int n, int root) {
   if ( A[root].left != NIL )     Postorder( A, n, A[root].left);
   if ( A[root].right != NIL )  Postorder( A, n, A[root].right);
      cout<<" "<<root;
}
int main(){
	int n;
	cin>>n;
	Node *A = new Node[n];
   int v,left,right;
   for(int i=0;i<n;i++) { 
   		A[i].left = A[i].right = A[i].parent = NIL;
   }

   for(int i=0;i<n;i++){
   		cin>>v>>left>>right;
   		A[v].left=left;
   		A[v].right=right;
   		A[left].parent = v;
   		A[right].parent = v;
    }


   int root=0;
   for ( int i = 0; i < n; i++ ) {
   	   if ( A[i].parent == NIL ) root = i;
   }

  cout<<"Preorder"<<endl;
  Preorder(A, n, root);
  cout<<endl;

  cout<<"Inorder"<<endl;
  Inorder(A, n, root);
  cout<<endl;
  
  cout<<"Postorder"<<endl;
  Postorder(A, n, root);
  cout<<endl;
  
	return 0;
}
