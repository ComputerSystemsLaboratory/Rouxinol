#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <utility>
using namespace std;
typedef pair<double, double> PDD;
PDD calc(double mat[2][2], double vec[2]){
  double a = mat[0][0], b = mat[0][1], d = mat[1][0], e = mat[1][1];
  double c = vec[0], f = vec[1];
  double det = a * e - d * b;
  return make_pair((e * c - b * f) / det, (-c * d + a * f) / det);
}
int main(){
  double mat[2][2];
  double vec[2];
  while(cin >> mat[0][0] >> mat[0][1] >> vec[0] >> mat[1][0] >> mat[1][1] >> vec[1]){
    PDD res = calc(mat, vec);
    double x = (double)(round(res.first*1000))/1000.0, y = (double)(round(res.second*1000))/1000.0;
    x = (x == -0.0) ? 0.0 : x;
    y = (y == -0.0) ? 0.0 : y;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}