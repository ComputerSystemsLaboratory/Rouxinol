#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int h, a[300];

  //input
  cin >> h;
  for(int i = 1;i <= h;i++) cin >> a[i];

  //output
  for(int i = 1;i <= h;i++){
    cout << "node " << i << ": ";
    cout << "key = " << a[i] << ", ";
    if(i / 2 != 0) cout << "parent key = " << a[i / 2] << ", "; //index of parent is i / 2
    if(2 * i <= h) cout << "left key = " << a[2 * i] << ", "; //index of left child is 2 * i
    if(2 * i + 1 <= h) cout << "right key = " << a[2 * i + 1] << ", "; //index of right child is 2 * i + 1
    cout << endl;
  }

  return 0;
}

