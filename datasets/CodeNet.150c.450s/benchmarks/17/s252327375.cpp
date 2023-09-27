#include <bits/stdc++.h>
using namespace std;

int main() {
  int num[5];
  for ( int i = 0; i < 5; i++ ) cin >> num[i];
  sort(num,num+5);
  reverse(num,num+5);

  cout << num[0] << " " << num[1] << " " << num[2] << " " << 
    num[3] << " " << num[4] << endl;
  return 0;
}