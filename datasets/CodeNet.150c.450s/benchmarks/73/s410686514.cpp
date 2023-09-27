#include <iostream>
#include <fstream>
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
#include <deque>
#include <stdio.h>
using namespace std;
 
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

template <class T> struct FenwickTree {

   vector<T> node;
   FenwickTree (int n) : node(n,0) {}

   void add(int idx, T val) {
      for (int i = idx; i < node.size(); i |= i + 1) {
         node[i] += val;
      }
   }

   T sum(int idx) {
      T ret = 0;
      for (int i = idx - 1; i >= 0; i = (i & (i + 1)) - 1) {
         ret += node[i];
      }
      return ret;
   }

};

int main() {

   int n,q; cin >> n >> q;
   FenwickTree<int> inst(100010);

   REP(i,q) {
      int com,x,y; cin >> com >> x >> y;
      if(com == 0) {
         inst.add(x,y);
      } else {
         cout << inst.sum(y+1) - inst.sum(x) << endl;
      }
   }
	
  return 0;
}