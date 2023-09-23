                                     
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
#define RENT 100000

int main(){
  int n;
  int cnt=0;

  float a, b, c, d, e, f;
  while(cin >> a >> b >> c >> d >> e >> f){

    float detA = a*e - b*d;
    float x = (e*c -b*f)/(detA);
    float y = (-(d*c) + a*f)/(detA);

    if(x==0)x=0;
    if(y==0)y=0;

    cout << fixed << setprecision(3) << x << " " << y << endl;
  }
}