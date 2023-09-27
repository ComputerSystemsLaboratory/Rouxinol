#include <iostream>
#include <cstdlib>
using namespace std;

int  parent(int k) {
  return (k / 2);
}
int left(int k) {
  return (2 * k);
}
int right(int k ) {
  return (2 * k + 1);
}

int main(){


  int h;
  cin >> h;
  int *a = (int *)malloc(sizeof(int) * (h + 1));
  for(int i = 1;i <= h;i++) cin >> a[i];

  for(int i = 1;i <=h;i++){

    cout << "node " << i << ": " << "key = " << a[i] << ", ";
    if(parent(i) >= 1) cout << "parent key = " << a[parent(i)] << ", ";
    if(left(i) <= h) cout << "left key = " << a[left(i)] << ", ";
    if(right(i) <= h) cout << "right key = " << a[right(i)] << ", ";
    cout << endl;
  }
}