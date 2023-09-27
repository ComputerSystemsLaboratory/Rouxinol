#include<iostream>
#include<cmath>
#define EPS 0.00000001
using namespace std;
int equals(double x,double y){ return (abs(x-y)<EPS);}
double S3(double,double,double,double,double,double);
int main(){
  double x1,x2,x3,y1,y2,y3,xp,yp;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    if(equals(
	      S3(x1,y1,x2,y2,xp,yp)+S3(x2,y2,x3,y3,xp,yp)+S3(x1,y1,x3,y3,xp,yp)
	      ,S3(x1,y1,x2,y2,x3,y3)
	      
	      ))
      cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
  return 0;
}
double S3( double x1, double y1, double x2,double y2, double x3, double y3 ){

  double sum = 0;
  sum = ( x1*y2 - x2*y1 ) + ( x2*y3 - x3*y2 ) + ( x3*y1 - x1*y3 );
  sum = abs(sum);
  sum /= 2;
  
  return sum;
}