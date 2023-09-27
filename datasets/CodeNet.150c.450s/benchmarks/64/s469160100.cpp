#include <iostream>
#define NUM 2000
#define rep(i,a) for(i = 0; i < a; i++) 
using namespace std;

int A[NUM],n;
bool solve(int,int);

int main(void) {
  int i,q,m;

  cin >> n;
  rep(i,n) {
    cin >> A[i];
  }
  cin >> q;
  rep(i,q){
    cin >> m;
    if(solve(0,m)) 
      cout << "yes" << endl;
    else cout << "no" << endl; 
  }
  return 0;
}

bool solve(int i, int m) {
  int res;
  if(m == 0) return true;
  if(i >= n) return false;
  res = solve(i + 1,m) || solve(i + 1, m - A[i]);
  return res;
}