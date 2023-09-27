#include<iostream>
#include<cstdio>
#include<cmath>
#define EPS 1e-10
using namespace std;

int main(){
  double x1,x2,x3,xp,y1,y2,y3,yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    double A = sqrt(pow(x1-x2,2)+pow(y1-y2,2)),B = sqrt(pow(x2-x3,2)+pow(y2-y3,2)), C = sqrt(pow(x1-x3,2)+pow(y1-y3,2)) ;
    double s = (A+B+C)/2.0;
    double S = sqrt(s*(s-A)*(s-B)*(s-C));
 
   double A12 = sqrt(pow(x1-x2,2)+pow(y1-y2,2)),B1p =sqrt(pow(x1-xp,2)+pow(y1-yp,2)), C2p = sqrt(pow(xp-x2,2)+pow(yp-y2,2)) ;
    double s2 = (A12+B1p+C2p)/2.0;
    double S2 = sqrt(s2*(s2-A12)*(s2-B1p)*(s2-C2p));
    /*
    if(S2 == 0){
      cout << "NO" << endl;
      break;
    }
    */
    double A13 = sqrt(pow(x1-x3,2)+pow(y1-y3,2)), Cp3 = sqrt(pow(xp-x3,2)+pow(yp-y3,2));
    double s3 = (A13+B1p+Cp3)/2.0;
    double S3 =  sqrt(s3*(s3-A13)*(s3-B1p)*(s3-Cp3));
    /*
    if(s3 == 0){
      cout << "NO" << endl;
      break;
    }
    */
    double A23 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    double s4 = (A23+C2p+Cp3)/2.0;
    double S4 =  sqrt(s4*(s4-A23)*(s4-C2p)*(s4-Cp3));
    /*
    if(S3 == 0){
      cout << "NO" << endl;
      break;
    }
    */
    double Ssum = S2+S3+S4;
    
    fabs(Ssum - S)< EPS?cout << "YES" << endl:cout << "NO" << endl;


  }
  return 0;
}