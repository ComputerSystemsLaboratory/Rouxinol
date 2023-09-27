#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

double calcSide(double a, double b, double l, double m){
  double side;
  double x, y;
  x = fabs(l - a);
  y = fabs(m - b);
  side = sqrt(x * x + y * y);
  return side;
}

double calcArea(double AB, double AC, double BC){
  double Area;
  double s = (AB + AC + BC) / 2;
  Area = sqrt(s * (s - AB) * (s - AC) * (s - BC));
  return Area;
}

int main(){
  double ax, ay, bx, by, cx, cy, px, py;;
  double ABC, APB, APC, BPC;
  double AB, AC, BC, AP, BP, CP;
  
  while(cin >> ax >> ay >> bx >> by >> cx >> cy >> px >> py){
    
    AB = calcSide(ax, ay, bx, by);
    AC = calcSide(ax, ay, cx, cy);
    BC = calcSide(bx, by, cx, cy);

    AP = calcSide(ax, ay, px, py);
    BP = calcSide(bx, by, px, py);
    CP = calcSide(cx, cy, px, py);

    ABC = calcArea(AB, AC, BC);
    APB = calcArea(AP, AB, BP);
    APC = calcArea(AP, AC, CP);
    BPC = calcArea(BP, BC, CP);

    if(fabs(APB + APC + BPC - ABC) < 0.000000001) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}