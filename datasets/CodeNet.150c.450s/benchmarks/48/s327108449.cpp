#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x,y,z,m;
  double e;
  while(cin>>e,e){
    m=1000000;
    for(z=0;z*z*z<=e;z++){
      y=(int)pow(e-z*z*z,0.5);
      x=e-y*y-z*z*z;
      if(m>x+y+z)m=x+y+z;
    }
    printf("%d\n",m);
  }
}