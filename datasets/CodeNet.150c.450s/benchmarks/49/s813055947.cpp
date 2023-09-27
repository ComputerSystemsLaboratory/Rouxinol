#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[111];
int main(void){
  while(cin >> n && n){
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int sum = 0;
    for(int i = 1; i < n-1; i++) sum += a[i];
    cout << sum/(n-2) << endl;
  }
}