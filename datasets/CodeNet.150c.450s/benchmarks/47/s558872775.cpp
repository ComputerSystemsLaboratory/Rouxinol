#include <iostream>
using namespace std;

int main (){
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r ;
    
    if(0<x && 0<y && r<=x&&x<=W-r && r<=y&&y<=H-r ){
        cout << "Yes" << endl;
    }
    else{ cout << "No" << endl;}
    
    return 0;
    
        
}