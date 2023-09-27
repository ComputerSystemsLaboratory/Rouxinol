#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;

#define INF 2000000001

class Node{
public:
  int key;
  int parent;
  int left, right;
public:
  Node(){parent = left = right = INF;}
  void print(){
    printf("key = %d, ", key);
    if(parent != INF)
      printf("parent key = %d, ", parent);
    if(left != INF)
      printf("left key = %d, ", left);
    if(right != INF)
      printf("right key = %d, ", right);
  }
};

int main(){
  int n; cin>> n;
  vector<Node> nodes(n+1);

  for(int i=1;i<=n;i++){
    cin >> nodes[i].key;
  }
  for(int i=1;i<=n;i++){
    if(i*2 <= n) nodes[i].left = nodes[i*2].key;
    if(i*2+1 <= n) nodes[i].right = nodes[i*2+1].key;
    if(i/2 < 1) continue;
    nodes[i].parent = nodes[i/2].key;
  }

  for(int i=1;i<=n;i++){
    printf("node %d: ", i);
    nodes[i].print();
    printf("\n");
  }

  return 0;
}