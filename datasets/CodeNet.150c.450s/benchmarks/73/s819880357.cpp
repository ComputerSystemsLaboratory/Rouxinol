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

template <class T> struct FenwickTree {
   vector<T> node;
   FenwickTree(int n) : node(n,0) {}
   void add(int idx, T val) {
      while (idx < node.size()) {
         node[idx] += val;
         idx += idx & -idx;
      }
   }
   T sum(int idx) {
      T ret = 0;
      while (idx > 0) {
         ret += node[idx];
         idx -= idx & -idx;
      }
      return ret;
   }
};

int main() {

   int n,q; cin >> n >> q;
   FenwickTree<int> inst(100010);
   REP(i,q){
      int com,x,y;
      cin >> com >> x >> y;
      if(com == 0) {
         inst.add(x,y);
      } else {
         cout << inst.sum(y) - (x>0 ? inst.sum(x-1) : 0) << endl;
      }
   }

   return 0;
}