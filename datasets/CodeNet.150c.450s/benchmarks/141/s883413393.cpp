#include<complex>
#include<iostream>
using namespace std;

typedef complex<double> Point;

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ( (a).real() , (b).real() ) && EQ( (a).imag(), (b).imag() ) )

// àÏ : aEb
double dot(Point a,Point b) {
  return (a.real()*b.real() + a.imag()*b.imag());
}

//OÏ a~b
double cross(Point a,Point b) {
  return (a.real()*b.imag() - a.imag()*b.real());
}


// a1,a2ð[_Æ·éüªÆb1,b2ð[_Æ·éüªÌð·»è
int is_intersected_ls(Point a1, Point a2, Point b1, Point b2) {
  return ( cross(a2-a1, b1-a1) * cross(a2-a1, b2-a1) < EPS ) &&
         ( cross(b2-b1, a1-b1) * cross(b2-b1, a2-b1) < EPS );
}

int main(){
  double x,y;

  while(cin>>x>>y){
  Point p1(x,y);

  cin>>x>>y;
  Point p2(x,y);

  cin>>x>>y;
  Point p3(x,y);

  cin>>x>>y;
  Point p(x,y);

  Point s(200,252.3);

  bool flag1,flag2,flag3;

  flag1= is_intersected_ls(p,s,p1,p2);
  flag2 = is_intersected_ls(p,s,p2,p3);
  flag3 = is_intersected_ls(p,s,p3,p1);

  if((flag1^flag2)^flag3) {
    cout<<"YES"<<endl;
    continue;
  }

  cout<<"NO"<<endl;

  }
}