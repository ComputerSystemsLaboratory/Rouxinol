#include <iostream>
#include <vector>

using namespace std;

bool checker(double a, double b,double x, double y, double px, double py, bool f);

double calc_slope(double x1, double y1, double x2, double y2);

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  double a1, a2, a3, b1, b2, b3;
  vector<double> x1s,y1s,x2s,y2s,x3s,y3s,xps,yps;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    x1s.push_back(x1);
    y1s.push_back(y1);
    x2s.push_back(x2);
    y2s.push_back(y2);
    x3s.push_back(x3);
    y3s.push_back(y3);
    xps.push_back(xp);
    yps.push_back(yp);
  }

  for(int i=0; i<x2s.size(); i++){
    bool flag = true, f;
    x1 = x1s[i];
    y1 = y1s[i];
    x2 = x2s[i];
    y2 = y2s[i];
    x3 = x3s[i];
    y3 = y3s[i];
    xp = xps[i];
    yp = yps[i];


    a1 = calc_slope(x1,y1,x2,y2);
    if(a1==0 && y1==y2){
      b1 = y1;
      f = false;
    }else if(a1==0 && x1==x2){
      b1 = x1;
      f = true;
    }else{
      b1 = -a1*x1+y1;
    }
    flag &= checker(a1,b1,x3,y3,xp,yp,f);

    a2 = calc_slope(x2,y2,x3,y3);
    if(a2==0&&y2==y3){
      b2 = y2;
      f = false;
    }else if(a2==0&&x2==x3){
      b2 = x2;
      f = true;
    }else{
      b2 = -a2*x2+y2;
    }
    flag &= checker(a2,b2,x1,y1,xp,yp,f);

    a3 = calc_slope(x3,y3,x1,y1);
    if(a3==0&&y3==y1){
      b3 = y3;
      f = false;
    }else if(a3==0&&x3==x1){
      b3 = x3;
      f = true;
    }else{
      b3 = -a3*x3+y3;
    }
    flag &= checker(a3,b3,x2,y2,xp,yp,f);

    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}

bool checker(double a, double b, double ox, double oy, double px, double py, bool flag){
  if(a == 0 && flag){
    if(b < ox && b < px){
      return true;
    }
    else if(b > ox && b > px){
      return true;
    }else{
      return false;
    }
  }else if(a==0){
    if(b < oy && b < py){
      return true;
    }
    else if(b > oy && b > py){
      return true;
    }else{
      return false;
    }
  }

  if(oy < a*ox+b && py < a*px+b){
    return true;
  }
  else if(oy > a*ox+b && py > a*px+b){
    return true;
  }
  else{
    return false;
  }
}

double calc_slope(double x1, double y1, double x2, double y2){
  if(x1 > x2){
    return (y1-y2)/(x1-x2);
  }else if(x1 < x2){
    return (y2-y1)/(x2-x1);
  }else{
    return 0;
  }
}