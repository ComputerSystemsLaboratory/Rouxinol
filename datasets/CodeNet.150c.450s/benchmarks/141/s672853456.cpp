#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
  double x[3], y[3], p[2];

  while(cin >> x[0] >> y[0]){
    for(int i = 1; i < 3; i++){
      cin >> x[i] >> y[i];
    }
    cin >> p[0] >> p[1];

    // pを(0,0)として三角形の位置をづらす
    for(int i = 0; i < 3; i++){
      x[i] -= p[0];
      y[i] -= p[1];
    }

    // 辺の長さ
    double triEdge[3];
    double pEdge[3];
    // 12 23 31
    for(int i = 0; i < 3; i++){
      triEdge[i] = sqrt(pow(x[i % 3] - x[(i + 1) % 3], 2)
		     + pow(y[i % 3] - y[(i + 1) % 3], 2));
    }

    // 1p 2p 3p
    for(int i = 0; i < 3; i++){
      pEdge[i] = sqrt(pow(x[i], 2) + pow(y[i], 2));
    }
    
    // ヘロンの公式
    double s;
    double ans;
    // 123の面積
    s = (triEdge[0] + triEdge[1] + triEdge[2]) / 2;
    ans = sqrt(s * (s - triEdge[0])*(s - triEdge[1])
	       *(s - triEdge[2]));

    double area;
    // p12の面積
    s = (triEdge[0] + pEdge[0] + pEdge[1]) / 2;
    area = sqrt(s * (s - triEdge[0])*(s - pEdge[0])
	       *(s - pEdge[1]));

    // p13の面積
    s = (pEdge[0] + pEdge[2] + triEdge[2]) / 2;
    area += sqrt(s * (s - pEdge[0])*(s - pEdge[2])
	       *(s - triEdge[2]));

    // p23の面積
    s = (pEdge[1] + triEdge[1] + pEdge[2]) / 2;
    area += sqrt(s * (s - pEdge[1])*(s - triEdge[1])
	       *(s - pEdge[2]));
    
    if(fabs(ans - area) < 0.00001){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
    
   
  }
  return 0;
}
  