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
vector<int> A;
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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> H;
  A.resize(H+1);
  FOR(i,0,H){
    cin>>A[i+1];
  }
  for(int i = H / 2; i > 0; i--){
    maxHeapify(i);
  }
  FOR(i,1,H+1){
    cout << " " << A[i];
  }
  cout << endl;
}
