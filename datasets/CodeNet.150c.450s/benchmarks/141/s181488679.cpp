#include<iostream>
using namespace std;
class Vector {
public:
  double x;
  double y;
  Vector(double xx=0,double yy=0) {x=xx;y=yy;}
  Vector operator+(Vector p) ;
  Vector operator-(Vector p);
};
Vector Vector::operator+(Vector p) {
  Vector tmp;
  tmp.x=x+p.x;
  tmp.y=y+p.y;
  return tmp;
}
Vector Vector::operator-(Vector p) {
  Vector tmp;
  tmp.x=x-p.x;
  tmp.y=y-p.y;
  return tmp;
}
bool check_hit(Vector A,Vector B,Vector C,Vector P);

int main() {
  double x1,x2,x3,y1,y2,y3,x,y;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x>>y) {
    Vector A(x1,y1);
    Vector B(x2,y2);
    Vector C(x3,y3);
    Vector P(x,y);
    if(check_hit(A,B,C,P))
      cout<<"YES\n";
    else
      cout<<"NO\n"; 
   }
  return 0;
}
bool check_hit(Vector A,Vector B,Vector C,Vector P) {
  Vector AB=B-A;
  Vector BC=C-B;
  Vector CA=A-C;
  Vector AP=P-A;
  Vector BP=P-B;
  Vector CP=P-C;
  double calc1=AB.x*BP.y - AB.y*BP.x;
  double calc2=BC.x*CP.y - BC.y*CP.x;
  double calc3=CA.x*AP.y - CA.y*AP.x;
  if( (calc1>0 && calc2>0 && calc3>0)||(calc1<0 && calc2<0 && calc3<0) )
    return true;
  return false;
      }

