/*! if g++ -g alds_1_7_c.cpp -o alds_1_7_c.out; then ./alds_1_7_c.out < alds_1_7_c.test; fi
 */


#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

class node{
public:
  int id, left, right, parent;
  node(): id(-1), left(-1), right(-1), parent(-1){}

};

vector<node> tree(0);

void dfs(int id){
  node& nd = tree[id];
  cout << " " << id;
  if(nd.left >= 0) dfs(nd.left);
  if(nd.right >= 0) dfs(nd.right);  
}

void inorder(int id){
  node& nd = tree[id];
  if(nd.left >= 0) inorder(nd.left);
  cout << " " << id;
  if(nd.right >= 0) inorder(nd.right);
}

void postorder(int id){
  node& nd = tree[id];
  if(nd.left >= 0) postorder(nd.left);
  if(nd.right >= 0) postorder(nd.right);
  cout << " " << id;
}


int main(){
  int n;
  cin >> n;
  tree.resize(n);
  for (int i = 0; i < n; i++) {
    int id, l, r;
    cin >> id >> l >> r;
    node& nd = tree[id];
    nd.id = id;
    nd.left = l;
    nd.right = r;
    if(l >= 0) tree[l].parent = id;
    if(r >= 0) tree[r].parent = id;
  }
  int rt = 0;
  for (int i = 0; i < n; i++) {
    if(tree[i].parent == -1){
      rt = i;
      break;
    }
  }
  cout << "Preorder" << endl;
  dfs(rt); cout << endl;
  cout << "Inorder" << endl;
  inorder(rt); cout << endl;
  cout << "Postorder" << endl;
  postorder(rt); cout << endl;  
  
  return 0;
}