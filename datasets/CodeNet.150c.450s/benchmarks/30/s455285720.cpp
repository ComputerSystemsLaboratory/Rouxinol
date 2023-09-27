#include <bits/stdc++.h>
using namespace std;

int n, a[111];

void ss(){
  int minj;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    minj = i;
    for(int j = i; j < n; j++){
      if(a[j] < a[minj]){
        minj = j;
      }
    }
    swap(a[i],a[minj]);
    if(a[i] < a[minj]) cnt++;
  }

  for(int i = 0; i < n; i++){
    if(i != n-1) cout << a[i] << " ";
    else cout << a[i] << endl;
  }
  cout << cnt << endl;
}

int main(){

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  ss();
}