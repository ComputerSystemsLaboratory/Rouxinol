//----------------------------------------------------
//HEADER
#include<bits/stdc++.h>

//NAMESPACE
using namespace std;

//CONSTANT
const int64_t INF=INT64_MAX;

//FAST I/O
void init(){cin.tie(0);ios::sync_with_stdio(false);}
//----------------------------------------------------

int64_t solve(int n){
  int64_t dept=100000;

  for(int i=0;i<n;i++){
    dept=(int)(dept*1.05);
    if(dept%1000!=0){
      dept+=(1000-dept%1000);
    }
  }

  return dept;
}

int main(){
  init();

  int64_t n;
  cin >> n;

  cout << solve(n) << endl;

  return 0;
}