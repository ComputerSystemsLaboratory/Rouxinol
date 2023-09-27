#include <iostream>
#include <cmath>
using namespace std;

double mnk(double a,double b,double c){
  double s = (a + b + c) / 2;
  double S = sqrt(s*(s - a)*(s - b)*(s - c)); //テ」ツδ佚」ツδュテ」ツδウテ」ツ?ョテ・ツ?ャテ・ツシツ?
  return S;
}

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  
  while( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ){
    double a = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    double b = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    double c = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    double S1 = mnk(a,b,c);
    
    double x = sqrt(pow(x1-xp,2) + pow(y1-yp,2));
    double y = sqrt(pow(x2-xp,2) + pow(y2-yp,2));
    double z = sqrt(pow(x3-xp,2) + pow(y3-yp,2));
    double S2 = mnk(x,y,a) + mnk(x,z,b) + mnk(y,z,c);
    
    if ((float)S1 == (float)S2){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
    
    
  }
  return 0;
}