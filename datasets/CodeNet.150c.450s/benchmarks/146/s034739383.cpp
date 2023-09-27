#include <iostream>
using namespace std;

int main() {
  int n;
  double x1,y1,x2,y2,x3,y3,x4,y4,det;
  double vect1[2],vect2[2];

  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    vect1[0] = x2-x1;
    vect1[1] = y2-y1;
    vect2[0] = x4-x3;
    vect2[1] = y4-y3;
    det = vect1[0] * vect2[1] - vect1[1] * vect2[0];
    if(det == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}