#include <iostream>
using namespace std;

int main(){

 int w, h, x, y, r;

 cin >> w >> h >> x >> y >> r;

 if (((x - r) < 0) || ((y - r) < 0)) {

  cout << "No\n";

 } else if (((x + r) > w) || ((y + r) > h)) {

  cout << "No\n";

 } else {

  cout << "Yes\n";

 }

 return 0;
}