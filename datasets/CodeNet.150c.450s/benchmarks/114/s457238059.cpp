#include <iostream>
#include <utility>
#include <algorithm>
#define MAX 22500
#define rep(i,p) for(int i=0;i<p;i++)
#define rep1(i,p) for(int i=1;i<=p;i++)
using namespace std;
int n,temp,a,b,size,ra,rb;
int A[MAX];
int B[MAX];
int W[MAX];
int V[MAX];
pair<int,int> edge[MAX];
int root (int child) {
  int a = child;
  while (V[a] != a) {
    a = V[a];
  }
  return a;
}
int main(){
  size = 0;
  cin >> n;
  rep(i,n) {
    rep(j,n) {
      cin >> W[size];
      if (i <= j && W[size] != -1) { 
        A[size] = i;
        B[size] = j;        
        edge[size].first = W[size];
        edge[size].second = size;
        size++;
      }
    }
  }
  // rep(i,size) {
  //   cout << A[edge[i].second] << " " << B[edge[i].second]
  //        << " " << edge[i].first << endl;;
  // }
  // sort by lenght of edge
  sort(edge, edge+size);
  
  int sum = 0;
  rep(i,n) V[i] = i;
  rep(i,size) {
    temp = edge[i].second;
    // a , b : vertex
    a = A[temp];
    b = B[temp];
    ra = root(a);
    rb = root(b);
    if (ra != rb) {
      // ?????????????????????
      sum += edge[i].first;
      V[ra] = rb;
    }
  }
  cout << sum << endl;
  return 0;
}