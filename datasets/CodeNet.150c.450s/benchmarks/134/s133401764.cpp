#include <iostream>
using namespace std;

typedef struct{
  int root,left,right;
} Node;
Node T[25];

void preorder(int root){
  if (root==-1)return;
  cout << " " << root;
  preorder(T[root].left);
  preorder(T[root].right);
}

void inorder(int root){
  if (root==-1)return;
  inorder(T[root].left);
  cout << " " << root;
  inorder(T[root].right);
}

void postorder(int root){
  if (root==-1)return;
  postorder(T[root].left);
  postorder(T[root].right);
  cout << " " << root;
}

int main(){
  int n,id,cl,cr,root;
  char *types[]={(char*)"root",(char*)"internal node",(char*)"leaf"};
  
  for (int i=0;i<25;i++){
    T[i].root=-1;
    T[i].left=-1;
    T[i].right=-1;
  }

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> id >> cl >> cr;
    T[id].left=cl;
    T[id].right=cr;
    if(cl!=-1)T[cl].root=id;
    if(cr!=-1)T[cr].root=id;
  }

  for (int i=0;i<n;i++){
    if (T[i].root==-1){
      root=i;
      break;
    }
  }
  cout << "Preorder" << endl;
  preorder( root);
  cout << endl;
 
  cout << "Inorder" << endl;
  inorder( root);
  cout << endl;
   
  cout << "Postorder" << endl;
  postorder( root);
  cout << endl;
 
  return 0;
}