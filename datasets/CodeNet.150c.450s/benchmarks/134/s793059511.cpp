#include<iostream>
typedef struct{
  int p, l, r;
}tree;
void preorder(int);
void inorder(int);
void postorder(int);
tree *T;
int main(){
  int n, i, x, root=0;
  std::cin>>n;
  T=new tree[n];
  for(i=0; i<n; i++) T[i].p = -1;
  for(i=0; i<n; i++){
    std::cin>>x;
    std::cin>>T[x].l>>T[x].r;
    T[T[x].l].p = T[T[x].r].p = x;
  }
  for(i=0; i<n; i++){
    if(T[i].p == -1){
      root = i;
      break;
    }
  }
  std::cout<<"Preorder\n";
  preorder(root);
  std::cout<<"\nInorder\n";
  inorder(root);
  std::cout<<"\nPostorder\n";
  postorder(root);
  std::cout<<std::endl;
  delete T;
  return 0;
}
void preorder(int x){
  if(x == -1) return;
  std::cout<<" "<<x;
    preorder(T[x].l);
    preorder(T[x].r);
}
void inorder(int x){
  if(x == -1) return;
    inorder(T[x].l);
    std::cout<<" "<<x;
    inorder(T[x].r);
}
void postorder(int x){
  if(x == -1) return;
    postorder(T[x].l);
    postorder(T[x].r);
    std::cout<<" "<<x;
}