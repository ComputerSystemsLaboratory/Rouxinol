#include <bits/stdc++.h>
using namespace std;

#define AMAX 100000

int main(){
  int a[AMAX];
  int n;
  cin >> n;
  int r = n - 1;

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int x = a[r];
  int i = -1;

  for(int j = 0; j < r; j++){
    if(a[j] <= x){
      i = i + 1;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[r]);

  int q = i + 1;

  for(int j = 0; j < n; j++){
    if(j != n-1){
      if(j == q){
        cout << "[" << a[j] << "]" << " " ;
      }else cout << a[j] << " ";
    }else {
      if(j == q){
        cout << "[" << a[j] << "]" << endl;
      }else cout << a[j] << endl;
    }
  }



}