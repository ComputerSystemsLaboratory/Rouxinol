#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a[45],n;
  cin >> n;
  a[0] = 1;
  a[1] = 1;
  if (n < 2){
    cout << a[n] << endl;
  }
  else{
    for (int i=2; i<=n; i++)
      a[i] = a[i-1] + a[i-2];
    cout << a[n] << endl;
  }
}