#include <iostream>
#include <cmath>

using namespace std;

void swap(double &x, double &y, double &xx, double &yy) 
{
  double tmp_x = x;
  double tmp_y = y;
  x = xx;
  y = yy;
  xx = tmp_x;
  yy = tmp_y;
}

bool isZero(double x) 
{
  return x < 0.000000001;
}

void compute(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) 
{
  if (x1 > x2)
    swap(x1, y1, x2, y2);
  else if (x1 == x2 && y1 > y2)
    swap(x1, y1, x2, y2);
  if (x3 > x4)
    swap(x3, y3, x4, y4);
  else if (x3 == x4 && y3 > y4)
    swap(x3, y3, x4, y4);

  double diff_x12 = x2 - x1;
  double diff_y12 = y2 - y1;
  double diff_x34 = x4 - x3;
  double diff_y34 = y4 - y3;

  // if (isZero(diff_x12) && isZero(diff_y12))
  //   cout << "NO" << endl;
  // else if (isZero(diff_x34) && isZero(diff_y34))
  //   cout << "NO" << endl;  
 if (!isZero(diff_x12) && !isZero(diff_x34)) {
    double ab = diff_y12 / diff_x12;
    double cd = diff_y34 / diff_x34;
    if (isZero(abs(ab - cd)))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else if (isZero(diff_x12) && isZero(diff_x34)) 
    cout << "YES" << endl;  
  else
    cout << "NO" << endl;  
}

int main(void) 
{
  int n;
  cin >> n;
  for (int i=0; i < n; i++) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    //cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << x4 << " " << y4;
    

    compute(x1, y1, x2, y2, x3, y3, x4, y4);
  }
  
  return 0;
}