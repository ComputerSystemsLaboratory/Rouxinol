#include <iostream>
#include <stdlib.h>

#define MAX_N 20
#define MAX_Q 200

int n;
int q;
  int A[MAX_N];

using namespace std;

// 0:true
// 1:false
int solve(int _res,int _num){

  if(_res == 0){
    return 0;
  }
  if(_num >= n){
    return 1;
  }

  if(solve(_res,_num+1) == 0 || solve(_res-A[_num],_num+1) == 0 ){
    return 0;
  }
  else {
    return 1;
  }
}

int main(){

  int i;
  int m;

  cin >> n;

  for(i = 0;i < n;i++){
    cin >> A[i];
  }

  cin >> q;

  for(i = 0;i < q;i++){
    cin >> m;
    if(solve(m,0) == 0){
      cout << "yes" << endl;
    }
    else {
      cout << "no" << endl;
    }
  }

  return 0;
}