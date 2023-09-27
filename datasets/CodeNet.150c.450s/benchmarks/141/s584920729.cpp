#include<iostream>

class vec{
  double x,y;
public:
  void set(double a,double b){
    x = a;
    y = b;
  }
  double getx(){return x;}
  double gety(){return y;}
};

double gaiseki(vec v1,vec v2){
  return v1.getx()*v2.gety() - v1.gety()*v2.getx();
}

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  vec v1,v2,v3;
  int flag = 0;

  while(std::cin >>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    v1.set(x2-x1,y2-y1);
    v2.set(x3-x1,y3-y1);
    v3.set(xp-x1,yp-y1);
    flag = 0;
    if(gaiseki(v3,v1)*gaiseki(v3,v2) < 0){
      v1.set(x1-x2,y1-y2);
      v2.set(x3-x2,y3-y2);
      v3.set(xp-x2,yp-y2);
      if(gaiseki(v3,v1)*gaiseki(v3,v2) < 0){
        v1.set(x1-x3,y1-y3);
        v2.set(x2-x3,y2-y3);
        v3.set(xp-x3,yp-y3);
        if(gaiseki(v3,v1)*gaiseki(v3,v2) < 0){
          flag = 1;
        }
      }
    }
    if(flag){
      std::cout << "YES" << std::endl;
    }else{
      std::cout << "NO" << std::endl;
    }
  }
}