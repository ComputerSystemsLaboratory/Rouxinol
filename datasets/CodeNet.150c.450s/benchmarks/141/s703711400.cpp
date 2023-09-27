#include<iostream>
#include<math.h>
using namespace std;
struct vect{
  double x,y;
};
double leng(vect a,vect b){
  return sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
    }
double Sc(vect a,vect b,vect c){
  double S,l1,l2,l3; 
  l1 = leng(a,b);
  l2 = leng(b,c);
  l3 = leng(c,a);
  S = (l1 + l2 + l3) / 2;
  return sqrt(S*(S-l1)*(S-l2)*(S-l3));
  
}

int main(){
  vect a,b,c,p;
  double s1,s2,s3,s;
  while(cin >> a.x >> a.y  >> b.x >> b.y >>c.x >>c.y >> p.x >> p.y){
    s1 = Sc(a,b,p); s2 = Sc(a,p,c); s3 = Sc(p,b,c); 
    s = Sc(a,b,c);
    if( Sc(a,b,p) + Sc(a,p,c) < Sc(a,b,c)&&Sc(p,b,c) + Sc(a,p,c) < Sc(a,b,c) && Sc(a,b,p) + Sc(p,b,c) < Sc(a,b,c) ){cout << "YES" << endl;
    }else {cout << "NO" << endl;}
    
  }
}