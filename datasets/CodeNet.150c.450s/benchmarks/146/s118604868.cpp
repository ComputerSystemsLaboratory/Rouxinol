#include<iostream>
#include<cmath>
using namespace std;
struct point{
  double x,y;
    };
int main(){
  point p[4];
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> p[0].x >> p[0].y>>p[1].x>>p[1].y>>p[2].x>>p[2].y>>p[3].x>>p[3].y;
    if(fabs((p[1].y -p[0].y)*(p[3].x -p[2].x)- (p[3].y-p[2].y)*(p[1].x-p[0].x)) <1.0e-15){
	cout << "YES" << endl;
      } else {cout << "NO" << endl;}
      
  }
}