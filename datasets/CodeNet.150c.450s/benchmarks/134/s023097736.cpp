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
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

// stackとかqueueうまく使うぽい

int par[30], ch[30][2];
vector<int> ans1,ans2,ans3;
int findGrandPar(int v){
  if(par[v] == v){
    return v;
  }
  return findGrandPar(par[v]);
}
// 先行順
void f1(int v){
  ans1.push_back(v);
  FOR(i,0,2){
    if(ch[v][i]!=-1){
      f1(ch[v][i]);
    }
  }
}
// 中間順
void f2(int v){
    if(ch[v][0]!=-1){
      f2(ch[v][0]);
    }
    ans2.push_back(v);
    if(ch[v][1]!=-1){
      f2(ch[v][1]);
    }
}
// 後行順
void f3(int v){
  FOR(i,0,2){
    if(ch[v][i]!=-1){
      f3(ch[v][i]);
    }
  }
  ans3.push_back(v);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;cin>>n;
  FOR(i,0,30) par[i] = i;
  FOR(i,0,n){
    int id,l,r;
    cin>>id>>l>>r;
    ch[id][0]=l;
    ch[id][1]=r;
    if(l!=-1)par[l]=id;
    if(r!=-1)par[r]=id;
  }
  int root = findGrandPar(0);
  f1(root);
  f2(root);
  f3(root);
  cout << "Preorder" << endl;
  FOR(i,0,n){
    cout << " ";
    cout << ans1[i];
  }
  cout << endl;
  cout << "Inorder" << endl;
FOR(i,0,n){
    cout << " ";
    cout << ans2[i];
  }
  cout << endl;
  cout << "Postorder" << endl;
  FOR(i,0,n){
    cout << " ";
    cout << ans3[i];
  }
  cout << endl;
}
