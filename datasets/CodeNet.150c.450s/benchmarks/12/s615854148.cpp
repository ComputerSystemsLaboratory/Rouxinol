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

int main(){

  long ii,jj,kk;
  vector<int> a;
  int n;
  cin >> n;
  vector<int> tree;
  tree.resize(n);

  for(ii=0;ii<n;ii++){
    cin >> tree[ii];
  }

  for(ii=0;ii<n;ii++){
    cout << "node "  << (ii+1) << ": key = " << tree[ii] << ", ";
    if(ii!=0){
      cout << "parent key = " << tree[(ii-1)/2] << ", ";
    }
    if(ii*2+1<n){
      cout << "left key = " << tree[ii*2+1] << ", ";
    }
    if(ii*2+2<n){
      cout << "right key = " << tree[ii*2+2] << ", ";
    }
    cout << endl;
  }
  
  return 0;
}

