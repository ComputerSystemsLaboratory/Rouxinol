#include <iostream>
#define AMAX 50
#define MMAX 200
#define TRUE 1
#define FALSE 0
using namespace std;

int solve(int,int);
int A[AMAX],n;
  
int main(){
  int q,M[MMAX];
  int i;
  
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> A[i];
  }
  cin >> q;
  for(i = 0; i < q; i++){
    cin >> M[i];
    if(solve(0,M[i]) > 0){  /**/
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }
  return 0;
}
int solve(int i,int m){
  int res;
  if(m == 0){
    return TRUE;
  }
  if(n <= i){
    return FALSE;
  }
  res = solve(i + 1, m) || solve(i + 1, m - A[i]);
  return res;
}