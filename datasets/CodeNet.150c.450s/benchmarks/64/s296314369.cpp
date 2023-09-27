#include <iostream>
using namespace std;

int n, q;
int a[50];
int m[200];

int search(int i, int tar){
  if( tar == 0) return 1;
  if( i >= n) return 0;
  int res = search(i + 1, tar) || search(i + 1, tar - a[i]);
  return res;
}

void solve(){

  for(int i = 0; i < q; i++){
    if(search(0, m[i])) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return ;
}


int main(){
  cin >> n;
  for(int i = 0; i<n; i++) cin >> a[i];
  cin >> q;
  for(int i = 0; i<q; i++) cin >> m[i];
  solve();
  return 0;
}