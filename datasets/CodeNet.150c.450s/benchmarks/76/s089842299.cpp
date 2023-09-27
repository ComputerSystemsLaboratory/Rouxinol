#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

using namespace std;
const int INF = 0x7fffffff;

struct Node{
  int key;
  Node *right,*left,*parent;
};

Node *root,*NIL;

void insert(Node* z){

  Node* y;
  Node* x;

  y = NIL;
  x = root;
  //cout << "insert key" << z->key <<endl;
  //printf("root:%x nill:%x",root,NIL);

  while(x != NIL){
    
    //cout << "in while" <<endl;
    y = x;

    if(z->key < x->key){
      x = x->left;
    }

    else{
      x = x->right;
    }
  }
  
  z->parent = y;
  //cout << "set parent";
  if(y == NIL){
    //cout << "decision root" << endl;
    root = z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
    


}


bool find(int key){
  Node* curPos = root;
  while(curPos != NIL){
    if(curPos->key == key){
      return true;
    }
    else if(curPos->key > key){
      curPos = curPos->left;
    }
    else{
      curPos = curPos->right;
    }
  }
  return false;
}
void inorder(Node* u){
  if(u == NIL){return;}

  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);

}

void preorder(Node* u){
  if(u == NIL){return;}
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

int main(){

  long ii,jj,kk;
  vector<int> a;
  int n;

  cin >> n;

  string command;
  int key;
  Node* z;

  //root = (Node*)malloc(sizeof(Node));
  //NIL  = (Node*)malloc(sizeof(Node));

  for(ii=0;ii<n;ii++){
    cin >> command ;

    if(command == "insert"){

      cin >> key;
      z = (Node*)malloc(sizeof(Node));
      z->key = key;
      z->left = NIL;
      z->right = NIL;
      insert(z);
    }
    else if(command == "find"){
      cin >> key;
      if(find(key)){
        cout << "yes" << endl;
      }
      else{
        cout << "no" << endl;
      }
    }
    else{
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;  
    }

  }



  return 0;
}

