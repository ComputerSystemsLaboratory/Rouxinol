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
int A[2020200];
int H;
// 1-indexed
void maxHeapify(int i){
  int l = i * 2;
  int r = i * 2 + 1;
  int largest;
  if(l <= H && A[l] > A[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if(r <= H && A[r] > A[largest]) {
    largest = r;
  }
  if(largest != i){
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}
void insert(int x){
  int i = ++H;
  A[i] = x;
  // 親より大きかったら入れ替える
  while(i>1&&A[i]>A[i/2]){
    swap(A[i], A[i/2]);
    i /= 2;
  }
}
int extract(){
  int ret = A[1];
  A[1] = A[H--];
  maxHeapify(1);
  return ret;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  while(cin>>s&&s!="end"){
    if(s=="insert") {
      int x;
      cin >> x;
      insert(x);
    } else {
      cout<<extract()<<endl;
    }
  }
}
