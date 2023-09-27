#include<iostream>
#include<string>
using namespace std;

int main() {
  int n;
  int p1 = 0;
  int p2 = 0;
  cin >> n;
  string a, b;
  for(int i = 0 ; i < n ; i ++) {
    cin >> a >> b;
    if( a > b) {
      p1 += 3;
    } else if ( a == b) {
      p1 += 1;
      p2 += 1;
    } else {
      p2 += 3;
    }
  }
  cout << p1 << " " << p2 << endl;

}