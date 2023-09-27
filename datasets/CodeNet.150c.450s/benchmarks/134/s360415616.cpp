#include<iostream>
#include<string>
using namespace std;

struct Node{
  int parent;
  int left;
  int right;
};

int cnt, n;

Node *T;

void Preparse(int u){
  if(u == -1) return;

  cout << ' ' << u;
  Preparse(T[u].left);
  Preparse(T[u].right);
}

void Inorder(int u){
  if(u == -1) return;
  Inorder(T[u].left);
  cout << ' ' << u;

  Inorder(T[u].right);
}

void Postorder(int u){
  if(u == -1) return;
  Postorder(T[u].left);
  Postorder(T[u].right);
  cout << ' ' << u;

}


int main(){


  int x, r, y;

  cin >> n;

  T = new Node[n];

  for(int i = 0; i < n; i++){
    T[i].parent = -1;
    T[i].left = -1;
    T[i].right = -1;
  }


  for(int k = 0; k < n; k++){

    cin >> x;

    for(int i = 0; i < 2; i++){
      cin >> y;
      T[y].parent = x;
      if(i == 0){
      T[x].left = y;
      }
      else{
        T[x].right = y;
      }
    }
  }

  for(int i = 0; i < n; i++){
    if(T[i].parent == -1){
      r = i;
      break;
    }
  }
  cnt = 0;
  cout << "Preorder" << endl;
  Preparse(r);
  cout << endl;

  cnt = 0;
  cout << "Inorder" << endl;
  Inorder(r);
  cout << endl;

  cnt = 0;
  cout << "Postorder" << endl;
  Postorder(r);
  cout << endl;


  delete[] T;
  return 0;
}

