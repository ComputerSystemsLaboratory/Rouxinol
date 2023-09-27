#include<iostream>
#include<cstdio>
#include<complex>
#include<cmath>

using namespace std;

typedef complex<double> xy_t;
double cross(xy_t a,xy_t b);

xy_t P[4];

int main(){
  int n;
  cin >> n;

  double x[4],y[4];
  
  for(int i=0;i<n;i++){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    for(int j=0;j<4;j++){
      P[j]=xy_t(x[j],y[j]);
    }
    if(abs(cross(P[1]-P[0],P[3]-P[2]))<pow(10,-10)){
      cout << "YES" <<endl;
    }else{
      cout << "NO" <<endl;
    }
    
  }

  

}

double cross(xy_t a,xy_t b){return (conj(a)*b).imag();}
    