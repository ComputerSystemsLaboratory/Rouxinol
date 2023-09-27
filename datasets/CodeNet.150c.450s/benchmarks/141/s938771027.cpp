
#include <iostream>
#include <cmath>

using namespace std;

double compute( double x[], double y[] ){

  double result = 0;
  for( int j = 1 ; j <= 3 ; j++ ){
    int J = j + 1;
    if( j == 3 ) J = 1;
    result += ( x[j]*y[J] - x[J]*y[j] );
  }
  result = abs(result) / 2;
  return result;
}

double heron(double a,double b,double c){
  double s = (a + b + c) / 2;
  double S = sqrt(s*(s - a)*(s - b)*(s - c) ); //テ」ツδ佚」ツδュテ」ツδウテ」ツ?ョテ・ツ?ャテ・ツシツ湘」ツつ津、ツスツソテァツ板ィ
  return S;
}

int main(void){

  double x[5];
  double y[5];

  while( cin >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3] >> x[4] >> y[4] ){

    double area1 = compute(x,y);
 
    double a = sqrt( pow( x[1] - x[2], 2 ) + pow( y[1] - y[2], 2 ) );
    double b = sqrt( pow( x[1] - x[3], 2 ) + pow( y[1] - y[3], 2 ) );
    double c = sqrt( pow( x[3] - x[2], 2 ) + pow( y[3] - y[2], 2 ) );
    double d = sqrt( pow( x[1] - x[4], 2 ) + pow( y[1] - y[4], 2 ) );
    double e = sqrt( pow( x[2] - x[4], 2 ) + pow( y[2] - y[4], 2 ) );
    double f = sqrt( pow( x[3] - x[4], 2 ) + pow( y[3] - y[4], 2 ) );
    double area2 = heron(d,e,a) + heron(d,f,b) + heron(e,f,c);

    if( (float)area1 == (float)area2) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}