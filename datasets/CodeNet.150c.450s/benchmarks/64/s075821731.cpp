/*Exhaustive Search*/
#include<iostream>
using namespace std;
bool solve(int i, int m, int n,int A[]){
  if(m == 0) 
    return true;
  else if(i >= n) 
    return false;
  else 
    return solve(i+1, m, n, A) || solve(i+1, m-A[i], n, A);
}
int main(){
  int n, m, q;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++) 
    cin >> A[i];
  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> m;
    if(solve(0, m, n, A)) 
      cout << "yes";
    else
      cout << "no";
    cout << endl;
  }
}