#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;

class tree{
public:
  int node;
  int parent = -1;
  int sibling = -1;
  int deg = 0;
  int depth = 0;
  int h = 0;
  vector<int> child;
  string type = "";
  void output(){
    printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, ", node, parent, sibling, deg, depth, h);
    cout << type << endl;
  }
};

vector<tree> bt;
void input(int id, int l, int r){
  bt[id].node = id;
  bt[l].sibling = r;
  bt[r].sibling = l;
  bt[l].parent = id;
  bt[r].parent = id;
  bt[id].deg = 2;
  if( l == -1 ){
    bt[id].deg--;
    bt[id].child.push_back(l);
  }else{
    bt[id].child.push_back(l);
  }
  if( r == -1 ){
    bt[id].deg--;
    bt[id].child.push_back(r);
  }else{
    bt[id].child.push_back(r);
  }
}

void getdepth(int pos, int depth){
  bt[pos].depth = depth;
  for(int i=0; i<bt[pos].child.size(); i++) getdepth(bt[pos].child[i], depth+1);
}

int getheight(int pos, int height){
  if( bt[pos].child.size() == 0 ) return height;
  else{
    int tmp = height;
    for(int i=0; i<bt[pos].child.size(); i++){
      tmp = max(tmp, getheight(bt[pos].child[i], height+1));
    }
    return tmp;
  }
}
vector<int> pre;
vector<int> post;
vector<int> ino;
void preorder(int now){
  // cout << now << endl;
  pre.push_back(now);
  for(int i=0; i<bt[now].child.size(); i++){
    if( bt[now].child[i] == -1 ) continue;
    preorder(bt[now].child[i]);
  }
}

void postorder(int now){
  for(int i=0; i<bt[now].child.size(); i++){
    if( bt[now].child[i] == -1 ) continue;
    postorder(bt[now].child[i]);
  }
  // cout << now << endl;
  post.push_back(now);
}

void inorder(int now){
  // for(int i=0; i<bt[now].child.size(); i++){
  //   inorder(bt[now].child[i]);
  //   ino.push_back(now);
  // }
  if( bt[now].child[0] != -1 ) inorder(bt[now].child[0]);
  ino.push_back(now);
  if( bt[now].child[1] != -1 ) inorder(bt[now].child[1]);

  // cout << now << endl;
}

int main(void) {

  int n;
  cin >> n;
  bt.resize(n);
  int id, l, r;
  for(int i=0; i<n; i++){
    cin >> id >> l >> r;
    input(id, l, r);
  }
  int root = -1;
  for(int i=0; i<n; i++){
    if( bt[i].parent == -1 ) root = bt[i].node;
  }

  getdepth(root, 0);
  // for(int i=0; i<n; i++){
  //   bt[bt[i].node].h = getheight(bt[i].node, 0);
  //   if( bt[bt[i].node].parent == -1 ) bt[bt[i].node].type = "root";
  //   else if( bt[bt[i].node].child.size() == 0 ) bt[bt[i].node].type = "leaf";
  //   else bt[bt[i].node].type = "internal node";
  // }
  // for(int i=0; i<n; i++){
  //   bt[i].output();
  // }
  preorder(root);
  inorder(root);
  postorder(root);
  cout << "Preorder" << endl;
  for(int i=0; i<n; i++){
    cout << " " << pre[i];
  }
  cout << endl << "Inorder" << endl;
  for(int i=0; i<n; i++){
    cout << " " << ino[i];
  }
  cout << endl << "Postorder" << endl;
  for(int i=0; i<n; i++){
    cout << " " << post[i];
  }
  cout << endl;

  return 0;
}

// EOF