#include <iostream>
using namespace std;
int main(void){
     int W,H,x,y,r;
     cin >> W;
     cin >> H;
     cin >> x;
     cin >> y;
     cin >> r;
     if (r<=x&&x<=W-r&&r<=y&&y<=H-r){
         cout << "Yes";
     }
     else cout << "No";
     
     cout << endl;
     
    
}
