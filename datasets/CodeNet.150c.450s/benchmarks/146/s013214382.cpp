#include <iostream>
#include <cmath>

using namespace std;

typedef struct myvector{
  double x;
  double y;
}Vector;

Vector sub_vector(Vector& a, Vector& b)
{
  Vector ret;
  ret.x = b.x - a.x;
  ret.y = b.y - a.y;
  return ret;
}

double cross_product(Vector& a, Vector& b)
{
  return a.x * b.y - b.x * a.y;
}

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    Vector A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    Vector AB = sub_vector(A, B);
    Vector CD = sub_vector(C, D);
    if(fabs(cross_product(AB, CD)) < 1.0e-10)
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
  }
}