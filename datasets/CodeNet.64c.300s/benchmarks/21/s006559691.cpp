#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

double round(double x, int k) {
  double res = x * pow(10, k) + 0.5;
  res = (double)(int)res;
  res = res * pow(0.1, k);
  return res;
}

int main() {
  double a, b, c, d, e, f;
  while (cin >> a >> b >> c >> d >> e >> f) {
    double det = a*e - b*d;
    double x = (e * c - b * f)/det;
    double y = (-1*d * c + a * f)/det;
    cout << fixed << setprecision(3) << round(x, 4) 
	 << " " << round(y, 4) << endl;
  }
}