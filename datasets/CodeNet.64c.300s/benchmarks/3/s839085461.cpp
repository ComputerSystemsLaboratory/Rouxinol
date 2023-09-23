#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void){
  int i, n, a[110];
  cin >> n;
  for(i = 0;i < n;i++)cin >> a[i];
  for(i = n - 1;i > 0;i--)printf("%d ", a[i]);
  cout << a[0] << endl;

  return 0;
}