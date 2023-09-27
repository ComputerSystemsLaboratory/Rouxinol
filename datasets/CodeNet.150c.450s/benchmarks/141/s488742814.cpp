#include <iostream>
#include <cmath>

using namespace std;

struct Vector{
  double x,y;
  Vector operator-(const Vector &v)const{
    return Vector(x-v.x,y-v.y);
  }
  Vector():x(0),y(0){}
  Vector(const Vector &v):x(v.x),y(v.y){}
  Vector(double xx,double yy):x(xx),y(yy){}
  Vector& operator=(const Vector& v){
    x=v.x;
    y=v.y;
    return (*this);
  }
};

struct Triangle{
  Vector v[3];
};

double outerprod(const Vector &v1,const Vector &v2);
bool is_in(const Triangle&,const Vector&);
int main(){
  Vector v;
  Triangle t;
  while(std::cin>>t.v[0].x>>t.v[0].y>>t.v[1].x>>t.v[1].y>>t.v[2].x>>t.v[2].y>>v.x>>v.y){
     if(is_in(t,v)){
       std::cout<<"YES"<<std::endl;
     }else{
       std::cout<<"NO"<<std::endl;
     }
  }
  return 0;
}

double outerprod(const Vector &v1,const Vector &v2){
  return v1.x*v2.y-v2.x*v1.y;
}

bool is_in(const Triangle& t,const Vector& v){
  double prod1 = outerprod(t.v[1]-t.v[0],v-t.v[1]);
  double prod2 = outerprod(t.v[2]-t.v[1],v-t.v[2]);
  double prod3 = outerprod(t.v[0]-t.v[2],v-t.v[0]);
  return (prod1<0&&prod2<0&&prod3<0)||(prod1>0&&prod2>0&&prod3>0);
}