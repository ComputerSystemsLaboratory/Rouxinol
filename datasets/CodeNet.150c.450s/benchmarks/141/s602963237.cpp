#include <iostream>
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
  Vector A, B, C, P;
  while(cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> P.x >> P.y){
    Vector AC = sub_vector(A, C);
    Vector CB = sub_vector(C, B);
    Vector BA = sub_vector(B, A);
    Vector AP = sub_vector(A, P);
    Vector CP = sub_vector(C, P);
    Vector BP = sub_vector(B, P);
    if((cross_product(AP, AC) > 0 && cross_product(CP, CB) > 0 && cross_product(BP, BA) > 0) || ((cross_product(AP, AC) < 0 && cross_product(CP, CB) < 0 && cross_product(BP, BA) < 0)))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;    
  }
}