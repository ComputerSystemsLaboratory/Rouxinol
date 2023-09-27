#include<bits/stdc++.h>
using namespace std;

int a[20];

bool solve(int i, int m, int n)
{
  bool res=false;
  
  if(m == 0){
    return true;
  }
  if(i >= n){
    return false;
  }
  res = solve(i+1,m,n) || solve(i+1,m-a[i],n);
  return res;
}
  
int main(){
  int n;
  cin >> n;

  for(int i=0;i < n;i++){
    cin >> a[i];
  }

  int q;
  cin >> q;

  int m;
  for(int i=0;i < q;i++){
    cin >> m;
    if( solve(0,m,n) ){
      cout << "yes" << endl;
    }
    else{
      cout << "no" << endl;
    }
  }
  return 0;
}
