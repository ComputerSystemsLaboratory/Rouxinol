#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
#define rep(i,n) for(int i = 0; i < n ; i++)
#define pb push_back
static const int INF = (1<<21);


int main(void){
  int n; cin >> n;
  int A[n];rep(i,n){cin >> A[i];}
  int L[n]; L[0] = A[0];
  int length = 1;

  rep(i,n){
    if(L[length -1] < A[i]){
      L[length] = A[i];
      length += 1;
    }else{
      *lower_bound(L, L + length, A[i]) = A[i];
    }

  //  cout << length << endl;
  }

  cout << length << endl;

  return 0;
}