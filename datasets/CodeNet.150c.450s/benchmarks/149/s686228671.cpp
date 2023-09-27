#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

struct UnionFind {
   vector<int> node;
   UnionFind(int n) : node(n,-1) {}
   bool unionSet(int x, int y) {
      x = root(x); 
      y = root(y);
      if (x != y) {
         if (node[y] < node[x]) swap(x, y);
         node[x] += node[y]; 
         node[y] = x;
      }
      return x != y;
   }
   bool findSet(int x, int y) {
      return root(x) == root(y);
   }
   int root(int x) {
      return node[x] < 0 ? x : node[x] = root(node[x]);
   }
   int size(int x) {
      return - node[root(x)];
   }
};

int main() {
   UnionFind inst(100010);
   int n,q; cin >> n >> q;
   REP(i,q){
      int com,x,y; cin >> com >> x >> y;
      if(com == 0) inst.unionSet(x,y);
      else cout << inst.findSet(x,y) << endl;
   }
   return 0;
}