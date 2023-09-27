#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int v[5];
  for(int i = 0; i < 5; i++) cin >> v[i];
  sort( v, v + 5 );
  reverse(v, v + 5);
  cout << v[0];
  for(int i = 1; i < 5; i++) cout << " " << v[i];
  cout << endl;
}