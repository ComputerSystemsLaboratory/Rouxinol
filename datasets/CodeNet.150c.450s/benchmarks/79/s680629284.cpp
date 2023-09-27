#include<iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, r, a[100], b[100];
  while(cin >> n >> r && n && r){
    for(int i = 0;i < n;i ++){
      a[i] = n-i;
    }
    for(int i = 0;i < r;i ++){
      int c, p;
      cin >> p >> c;
      for(int j = p-1;j<p+c-1;j++){
        b[j] = a[j];
      }
      for(int j = p-2;j>=0;j--){
        a[j+c] = a[j];
      }
      for(int j = p-1;j<p+c-1;j++){
        a[j-(p-1)] = b[j];
      }
    }
    cout << a[0] << endl;
  }
  return 0;
}