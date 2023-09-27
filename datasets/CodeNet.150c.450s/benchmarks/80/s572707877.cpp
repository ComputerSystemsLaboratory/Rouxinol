#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int a[5], b[5];

  for(int i=0;i<4;i++) cin >> a[i];
  for(int i=0;i<4;i++) cin >> b[i];

  int k = 0, s = 0;
  for(int i=0;i<4;i++){
    k += a[i];
    s += b[i];
  }

  cout << max(k,s) << endl;
}