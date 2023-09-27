#include <iostream>
using namespace std;

struct Node{
  int key;
  int parent;
  int left;
  int right;
};

int h;

void print(Node t[]){
  for(int i=1;i<h+1;i++){
    cout << "node " << i << ": ";
    cout << "key = " << t[i].key << ", ";
    if(t[i].parent != 0) cout << "parent key = " << t[t[i].parent].key << ", ";
    if(t[i].left <= h) cout << "left key = " << t[t[i].left].key << ", ";
    if(t[i].right <= h) cout << "right key = " << t[t[i].right].key << ", ";
    cout << endl;
  }
}

int main(){
  cin >> h;
  Node tree[h+1];
  for(int i=1;i<h+1;i++){
    cin >> tree[i].key;
    tree[i].parent = i/2;
    tree[i].left = i*2;
    tree[i].right = i*2 + 1;
  }
  print(tree);
  return 0;
}

