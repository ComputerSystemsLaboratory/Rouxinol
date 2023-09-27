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

int gcd(int x,int y){
  int mi,ma;
  ma = max(x,y);
  mi = min(x,y);
  if(ma % mi == 0){
    return mi;
  }
  else{
    return gcd(mi,ma % mi);
  }
}
struct node{
  int parent;
  int right;
  int left;
  int sibling;
};

int countDegree(node* n){
  int cnt=0;

  if(n->right != -1){cnt++;}
  if(n->left  != -1){cnt++;}
  
  return cnt;

}

int getDepth(int id,vector<node>* nodes){
  int depth = 0;
  id = nodes->at(id).parent;  
  while(id != -1){
    id = nodes->at(id).parent;
    depth++;
  }
  return depth;
}

int getHeight(int id,vector<node>* nodes){
  int h1 = 0,h2 = 0;
  h1 = 0;
  h2 = 0;

  if(nodes->at(id).left != -1){
    h1 = getHeight(nodes->at(id).left,nodes) + 1;
  }
  if(nodes->at(id).right != -1){
    h2 = getHeight(nodes->at(id).right,nodes) + 1;
  }
  
  return max(h1,h2);
}

void dispPreorder(int root,vector<node>* nodes){
  // root表示
  int cnt=0;
  cout << " " << root ;
  cnt++;
  // 左
  if(nodes->at(root).left != -1){
    dispPreorder(nodes->at(root).left,nodes);
  }
  //右
  if(nodes->at(root).right != -1){
    dispPreorder(nodes->at(root).right,nodes);
  }  

}

void dispInorder(int root,vector<node>* nodes){
  int cnt=0;
  if(nodes->at(root).left != -1){

    dispInorder(nodes->at(root).left,nodes);

  }

  cout << " " << root ;
  cnt++;

  if(nodes->at(root).right != -1){
    dispInorder(nodes->at(root).right,nodes);

  }
  
}

void dispPostorder(int root,vector<node>* nodes){
  int cnt=0;
  //if(nodes->at(root).left != -1){
  //
  //  dispInorder(nodes->at(root).left,nodes);
  //  cout << nodes->at(root).left << " ";
  //  int sibling;
  //  sibling = nodes->at(nodes->at(root).left).sibling;
  //  if(sibling != -1){
  //    cout << sibling << "sone";
  //  }
  //}
  //
  //if(nodes->at(root).right != -1){
  //  dispInorder(nodes->at(root).right,nodes);
  //  //cout << nodes->at(root).right << " ";
  //}
  //if(nodes->at(root).parent == -1){
  //  cout << root << " ";
  //}

  if(root==-1){
    return;
  }

  dispPostorder(nodes->at(root).left,nodes);
  //cout << "==" << root << "==" ;
  dispPostorder(nodes->at(root).right,nodes);

  cout << " " << root ;
  cnt++;

  
}

int getRoot(int id,vector<node>* nodes){
  int parent,prev;
  parent = nodes->at(id).parent;
  prev = id;
  while(parent != -1){
    prev = parent;
    parent = nodes->at(parent).parent;
  }
  return prev;
}

int main(){
  long ii,jj,kk;
  vector<int> a;
  vector<node> nodes;
  int n;
  cin >> n;
  nodes.resize(n);
  int id,left,right;

  for(ii=0;ii<n;ii++){
    nodes[ii].parent = -1;
    nodes[ii].sibling = -1;
  }
  
  for(ii=0;ii<n;ii++){
    cin >> id >> left >> right;

    nodes[id].left = left;
    nodes[id].right = right;

    if(left != -1){
      nodes[left].parent = id;
      nodes[left].sibling = right;
    }

    if(right != -1){
      nodes[right].sibling = left;
      nodes[right].parent = id;
    }
  }

  //根を求める
  //cout << "==" << getRoot(8,&nodes) << "==";
  int root = getRoot(0,&nodes);
  //cout << "root" << root << endl;
  //Preorder
  //根 左 右
  cout << "Preorder" << endl;
  dispPreorder(root,&nodes);
  cout << endl;
  //Inorder
  //左 根 右
  cout << "Inorder" << endl;
  dispInorder(root,&nodes);
  cout << endl;
  //PostOrder
  //左 右 根
  cout << "Postorder" << endl;
  dispPostorder(root,&nodes);
  cout << endl;  
  return 0;
}

