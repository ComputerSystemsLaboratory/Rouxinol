#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;

// union - find tree !!!!!!!!!!!!!!!!!!!!!!!!!
vector<int> par; //oya
vector<int> rnk; //ki no hu ka sa
// n????´???§?????????
void init(int n){
    par.resize(n);rnk.resize(n);
    FOR(i, 0, n){par[i] = i;rnk[i] = 0;}
}
//??¨??????????±???????
int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
}
//x??¨y????±??????????????????????
void Merge(int x, int y){
    x = find(x);y = find(y);
    if(x == y) return;
    if(rnk[x] < rnk[y])par[x] = y;
    else{par[y] = x;if(rnk[x] == rnk[y]) rnk[x]++;}
    return;
}

int main(){
  int n, m; cin >> n >> m;
  init(n);
  FOR(i,0,m){
    int a, b;
    cin >> a >> b;
    Merge(a, b);
  }
  int q;
  cin >> q;
  FOR(i,0,q){
    int a, b;
    cin >> a >> b;
    if(find(a) == find(b)){
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}