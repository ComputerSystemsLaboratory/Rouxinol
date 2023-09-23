#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double m[2][2],det,i[2][2],x[2];
  while(cin >>m[0][0]>>m[0][1]>>x[0]>>m[1][0]>>m[1][1]>>x[1]){
    det = m[0][0]*m[1][1]-m[0][1]*m[1][0];
    i[0][0] = m[1][1]/det;
    i[0][1] = -m[0][1]/det;
    i[1][0] = -m[1][0]/det;
    i[1][1] = m[0][0]/det;
    printf("%.3lf %.3lf\n",i[0][0]*x[0]+i[0][1]*x[1],i[1][0]*x[0]+i[1][1]*x[1]);
  }
 return 0;
}