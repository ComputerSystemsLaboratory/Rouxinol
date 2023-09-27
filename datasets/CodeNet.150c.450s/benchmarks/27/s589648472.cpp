#include <iostream>
#include <string>
#define NIL 3000000000
using namespace std;

class node{
public:
  long long int num;
  node* parent;
  node* left;
  node* right;

  node(){
    num = NIL;
    parent = NULL;
    left = NULL;
    right = NULL;
  }

  node(long long int n){
    num = n;
    parent = NULL;
    left = NULL;
    right = NULL;
  }

  void insert(long long int n){
    if(num==NIL) num=n;
    //値が小さいとき
    if(n<num){
      if(left==NULL){
        left = new node(n);
        left->parent=this;
      }else{
        left->insert(n);
      }

    //値が大きいか等しいとき
    }else if(n>num){
      if(right==NULL){
        right = new node(n);
        right->parent=this;
      }else{
        right->insert(n);
      }
    }else return;
  }

  void print_inorder(){
    if(left!=NULL) left->print_inorder();
    if(num!=NIL) cout << " " << num;
    if(right!=NULL) right->print_inorder();
  }
  void print_preorder(){
    if(num!=NIL) cout << " " << num;
    if(left!=NULL) left->print_preorder();
    if(right!=NULL) right->print_preorder();
  }
};

/*
class root{
public:
  node* rn;

  root(){
    rn = NULL;
  }

  void insert(long long int n){
    if(rn==NULL){
      node r(n);
      rn = &r;
    }else rn->insert(n);
  }

  void print(){
    if(rn==NULL) return;
    else rn->print();
  }
};
*/

int main(){
  int n; cin >> n;

  node bst;

  string m; long long int num;
  for(int i=0; i<n; i++){
    cin >> m;
    if(m[0]=='i') {
      cin >> num;
      bst.insert(num);
    }
    else if(m[0]=='p') {
      bst.print_inorder(); cout << endl;
      bst.print_preorder(); cout << endl;
    }
  }

  return 0;
}

