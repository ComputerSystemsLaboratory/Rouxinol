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
typedef pair<char, int> P;
vector<P> A;
// A[p,...,r]をA[r]を基準に左右に分ける, return 境目
int partition(int p, int r){
  int x = A[r].second;
  int i = p - 1; // A[r]以下の場所の最大
  FOR(j,p,r){
    if(A[j].second <= x){
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i + 1;
}
void quicksort(int p, int r){
  if(p < r){
    int q = partition(p, r);
    quicksort(p, q - 1);
    quicksort(q + 1, r);
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  A.resize(n);
  map<int, string> MAP1, MAP2;
  FOR(i,0,n){
    cin>>A[i].first>>A[i].second;
    MAP1[A[i].second] += A[i].first;
  }
  quicksort(0, n - 1);
  FOR(i,0,n){
    MAP2[A[i].second] += A[i].first;
  }
  bool isSt = true;
  for(auto m1 : MAP1){
    if(m1.second != MAP2[m1.first]) isSt = false;
  }
  cout<<(isSt?"Stable":"Not stable")<<endl;
  FOR(i,0,n){
    cout << A[i].first << " " << A[i].second <<endl;
  }
}
