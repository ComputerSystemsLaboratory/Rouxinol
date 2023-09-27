#include<iostream>
#include<cmath>
using namespace std;

#define EPS 1e-10

int main(){
  int n;
  double ax,ay,bx,by,cx,cy,dx,dy;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
    if( abs(ax-bx)<EPS && abs(cx-dx)<EPS )cout << "YES\n";
    else if( abs(ax-bx)<EPS || abs(cx-dx)<EPS )cout << "NO\n";
    else if( abs( (ay-by)/(ax-bx) - (cy-dy)/(cx-dx) ) < EPS)cout << "YES\n";
    else cout << "NO\n";
  }
}