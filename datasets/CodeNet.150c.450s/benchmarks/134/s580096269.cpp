#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#define INTINF 2147483647
#define LLINF 9223372036854775807
#define MAX 30
#define NIL -1
typedef long long ll;
using namespace std;


struct BTNode { int parent, left, right; };
BTNode T[MAX];
int root;


void input(){
  int n, id, l, r;
  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> id >> l >> r;
    T[id].left = l;  T[id].right = r;
    if (l != NIL) T[l].parent = id;
    if (r != NIL) T[r].parent = id;
  }
  for (size_t i = 0; i < n; i++) {
    if(T[i].parent==NIL) root=i;
  }
}


void PreorderWalk(int id){
  if (id == NIL) return;
  std::cout << " " << id;
  PreorderWalk(T[id].left);
  PreorderWalk(T[id].right);
}

void InorderWalk(int id){
  if (id == NIL) return;
  InorderWalk(T[id].left);
  std::cout << " " << id;
  InorderWalk(T[id].right);
}

void PostorderWalk(int id){
  if (id == NIL) return;
  PostorderWalk(T[id].left);
  PostorderWalk(T[id].right);
  std::cout << " " << id;
}



int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  input();

  std::cout << "Preorder" << '\n';
  PreorderWalk(root);
  std::cout << '\n';

  std::cout << "Inorder" << '\n';
  InorderWalk(root);
  std::cout << '\n';

  std::cout << "Postorder" << '\n';
  PostorderWalk(root);
  std::cout << '\n';

  return 0;
}

