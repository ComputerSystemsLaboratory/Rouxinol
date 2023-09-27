#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  double ax,ay,bx,by,cx,cy,dx,dy,ans1,ans2,x,y;
   for(int i=0;i<n;i++){
     cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
     x = ax - bx;
     y = ay - by;
     ans1 = y / x;
     x = cx - dx;
     y = cy - dy;
     ans2 = y / x;
     if(ans1==ans2) cout << "YES" << endl;
     if(ans1!=ans2) cout << "NO" << endl;
   }
   return 0;
}