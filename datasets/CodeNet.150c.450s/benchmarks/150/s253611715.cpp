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
int A[2000006],B[2000006];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  FOR(i,0,n)cin>>A[i];
  int C[11111];
  CLR(C);
  FOR(i,0,n){
    C[A[i]]++;
  }
  FOR(i,0,10101){
    C[i+1] = C[i+1] + C[i];
  }
  FOR(i,0,n){
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }
  FOR(i,0,n){
    if(i) cout<<" ";
    cout<<B[i];
  }
  cout<<endl;
  return 0;
}
