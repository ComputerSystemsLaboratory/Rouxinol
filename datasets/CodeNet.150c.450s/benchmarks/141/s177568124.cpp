#include <iostream>
using namespace std;
typedef double d;

bool is_inner(d a1,d a2,d b1,d b2,d c1,d c2) {
  if(((b1-a1)*(c2-b2)-(b2-a2)*(c1-b1)) >0) return true;
  return false;
}
int main() {
  d x1,y1,x2,y2,x3,y3,xp,yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    bool a,b,c;
    a = is_inner(x1,y1,x2,y2,xp,yp);
    b = is_inner(x2,y2,x3,y3,xp,yp);
    c = is_inner(x3,y3,x1,y1,xp,yp);
    if(a == b && b == c) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}