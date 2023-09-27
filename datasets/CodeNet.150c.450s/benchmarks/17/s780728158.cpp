#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
  int a[5];
  for(int i=0;i<5;i++)cin>>a[i];
  sort(a, a+5);
  cout<<a[4];
  for(int n=4;n--;)cout<<" "<<a[n];
  cout<<endl;
  return 0;
}