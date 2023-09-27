#include <iostream>
#include <cmath>
using namespace std;
double heron(double a,double b,double c){
  double s = (a+b+c)/2;
  return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main(){
  double x[4],y[4];
  while(cin >> x[0]>>y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){
  
    double A,B,C;
    A = sqrt(pow(x[0] - x[1],2)+pow(y[0] - y[1],2));
    B = sqrt(pow(x[0] - x[2],2)+pow(y[0] - y[2],2));
    C = sqrt(pow(x[2] - x[1],2)+pow(y[2] - y[1],2));

    double S1 = heron(A,B,C);

    double XA,XB,XC;
    XA = sqrt(pow(x[0] - x[3],2)+pow(y[0] - y[3],2));
    XB = sqrt(pow(x[1] - x[3],2)+pow(y[1] - y[3],2));
    XC = sqrt(pow(x[2] - x[3],2)+pow(y[2] - y[3],2));

    double S2 = heron(XA,XB,A) + heron(XA,XC,B) + heron(XB,XC,C);
    if((float)S1 == (float)S2)cout <<"YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}