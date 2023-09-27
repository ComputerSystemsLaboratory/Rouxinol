#include<complex>
#include<iostream>
using namespace std;

typedef complex<double> Point;

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ( (a).real() , (b).real() ) && EQ( (a).imag(), (b).imag() ) )

//OÏ a~b
double cross(Point a,Point b) {
  return (a.real()*b.imag() - a.imag()*b.real());
}

//¼üÌ½s»è
int is_parallel(Point a1,Point a2,Point b1,Point b2){
  return EQ( cross(a1-a2,b1-b2) , 0.0 );
}

int main(){
  int n;
  double x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>n;
  while(n--){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Point p1(x1,y1),p2(x2,y2),p3(x3,y3),p4(x4,y4);
    if( is_parallel(p1,p2,p3,p4)){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}