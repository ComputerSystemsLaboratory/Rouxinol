#include<iostream>
#include<algorithm>
using namespace std;
int main(){

  int a[5],n=5;
  while(n--) cin >> a[n];
  sort(a,a+5);
  for(int i = 4;i >= 0;i--){
    if(i != 0) cout << a[i] << ' ';
    else cout << a[i] << endl;
  }
  return (0);
}