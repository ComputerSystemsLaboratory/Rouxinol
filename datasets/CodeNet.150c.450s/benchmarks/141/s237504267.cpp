#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

float calc_crossZ(vector<float> v1, vector<float>v2){
  float result = v1[0]*v2[1] - v1[1]*v2[0];
  return result;
}

bool same_sign(float a, float b){
  if(a<0 && b<0){
    return true;
  }else if(a>0 && b>0){
    return true;
  }
  return false;
}
    

bool do_calc(float x1, float y1, float x2, float y2, float x3, float y3, float xp,float yp){

  // vector<vector <float> > points(3, 2);
  
  // points[0][0] = x1;
  // points[0][1] = y1;
  // points[1][0] = x2;
  // points[1][1] = y2;
  // points[2][0] = x3;
  // points[2][1] = y3;

  
  vector<float> AB;
  AB.push_back(x2-x1);
  AB.push_back(y2-y1);
  vector<float> AC;
  AC.push_back(x3-x1);
  AC.push_back(y3-y1);
  vector<float> AP;
  AP.push_back(xp-x1);
  AP.push_back(yp-y1);

  float std = calc_crossZ(AB, AC);
  float comp = calc_crossZ(AB, AP);

  if(same_sign(std, comp)){
    return true;
  }else{
    return false;
  }


}
  

int main(){
  float x1, y1, x2, y2, x3, y3, xp, yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    if(do_calc(x1, y1, x2, y2, x3, y3, xp, yp)&&do_calc(x2, y2, x3, y3, x1, y1, xp, yp)&&do_calc(x3, y3, x1, y1, x2, y2, xp, yp)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  
  return 0;
}